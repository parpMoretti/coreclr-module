# Check http://releases.llvm.org/download.html#7.0.1 for the latest available binaries
FROM ubuntu:18.04
# FROM mcr.microsoft.com/dotnet/core/sdk:2.2 AS build
# FROM mcr.microsoft.com/dotnet/core/runtime:2.2 AS runtime
FROM 7hazard/node-clang-7

RUN apt-get update && apt-get install -y software-properties-common wget

RUN wget -q https://packages.microsoft.com/config/ubuntu/18.04/packages-microsoft-prod.deb
RUN dpkg -i packages-microsoft-prod.deb
RUN add-apt-repository universe
RUN apt-get update && apt-get install -y dotnet-sdk-2.2
RUN rm packages-microsoft-prod.deb

WORKDIR /clrhost
COPY clrhost/ .

RUN sh linux-build.sh
WORKDIR /clrhost/cmake-build-linux/src
RUN mkdir -p /altv-server/modules/
RUN cp libcsharp-module.so /altv-server/modules/

WORKDIR /altv-server

EXPOSE 7788/udp
EXPOSE 7788/tcp
EXPOSE 80/tcp