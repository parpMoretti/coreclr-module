#pragma once

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wempty-body"
#pragma clang diagnostic ignored "-Wswitch"
#endif

#include <altv-cpp-api/SDK.h>

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#ifdef __cplusplus
extern "C"
{
#endif
EXPORT void VoiceChannel_GetMetaData(alt::IVoiceChannel* channel, const char* key, alt::MValue &val);
EXPORT void VoiceChannel_SetMetaData(alt::IVoiceChannel* channel, const char* key, alt::MValue* val);

EXPORT void VoiceChannel_AddPlayer(alt::IVoiceChannel* channel, alt::IPlayer* player);
EXPORT void VoiceChannel_RemovePlayer(alt::IVoiceChannel* channel, alt::IPlayer* player);
EXPORT void VoiceChannel_MutePlayer(alt::IVoiceChannel* channel, alt::IPlayer* player);
EXPORT void VoiceChannel_UnmutePlayer(alt::IVoiceChannel* channel, alt::IPlayer* player);
EXPORT bool VoiceChannel_IsPlayerConnected(alt::IVoiceChannel* channel, alt::IPlayer* player);
EXPORT bool VoiceChannel_IsPlayerMuted(alt::IVoiceChannel* channel, alt::IPlayer* player);
EXPORT bool VoiceChannel_IsSpatial(alt::IVoiceChannel* channel);
EXPORT float VoiceChannel_GetMaxDistance(alt::IVoiceChannel* channel);
#ifdef __cplusplus
}
#endif
