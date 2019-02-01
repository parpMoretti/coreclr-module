#include "server.h"

void Server_LogInfo(alt::IServer *server, const char *str)
{
    server->LogInfo(alt::StringView(str));
}

void Server_LogDebug(alt::IServer *server, const char *str)
{
    server->LogDebug(alt::StringView(str));
}

void Server_LogWarning(alt::IServer *server, const char *str)
{
    server->LogWarning(alt::StringView(str));
}

void Server_LogError(alt::IServer *server, const char *str)
{
    server->LogError(alt::StringView(str));
}

void Server_LogColored(alt::IServer *server, const char *str)
{
    server->LogColored(alt::StringView(str));
}

uint32_t Server_Hash(alt::IServer *server, const char *str)
{
    return server->Hash(alt::StringView(str));
}

void Server_SubscribeEvent(alt::IServer *server, alt::CEvent::Type ev, alt::EventCallback cb)
{
    return server->SubscribeEvent(ev, cb);
}

void Server_SubscribeTick(alt::IServer *server, alt::TickCallback cb)
{
    return server->SubscribeTick(cb);
}

void Server_SubscribeCommand(alt::IServer *server, const char *cmd, alt::CommandCallback cb)
{
    return server->SubscribeCommand(alt::StringView(cmd), cb);
}

void Server_TriggerServerEvent(alt::IServer *server, const char *ev, const alt::MValueList *args)
{
    server->TriggerServerEvent(alt::StringView(ev), *args);
}

void Server_TriggerClientEvent(alt::IServer *server, alt::IPlayer *target, const char *ev, const alt::MValueList *args)
{
    server->TriggerClientEvent(target, alt::StringView(ev), *args);
}

alt::IVehicle *Server_CreateVehicle(alt::IServer *server, uint32_t model, alt::Position pos, float heading)
{
    return server->CreateVehicle(model, pos, heading);
}

alt::ICheckpoint *Server_CreateCheckpoint(alt::IServer *server, alt::IPlayer *target, uint8_t type, alt::Position pos, float radius, float height, alt::RGBA color)
{
    return server->CreateCheckpoint(target, type, pos, radius, height, color);
}

alt::IBlip *Server_CreateBlip(alt::IServer *server, alt::IPlayer *target, uint8_t type, alt::Position pos)
{
    return server->CreateBlip(target, type, pos);
}

alt::IBlip *Server_CreateBlipAttached(alt::IServer *server, alt::IPlayer *target, uint8_t type, alt::IEntity *attachTo)
{
    return server->CreateBlip(target, type, attachTo);
}

void Server_RemoveEntity(alt::IServer *server, alt::IEntity *entity)
{
    return server->RemoveEntity(entity);
}