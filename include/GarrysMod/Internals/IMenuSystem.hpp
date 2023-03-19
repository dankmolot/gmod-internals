#ifndef GARRYSMOD_INTERNALS_IMENUSYSTEM
#define GARRYSMOD_INTERNALS_IMENUSYSTEM

#include <tier1/interface.h>

class IGet;
class IGarrysMod;
class CGlobalVarsBase;
class INetworkStringTableContainer;
class CLuaError;

namespace IAddonsSystem {
    struct Information;
}

namespace GarrysMod::Internals {
    class IMenuSystem {
    public:
        virtual ~IMenuSystem() = 0;
        virtual ~IMenuSystem() = 0;
        virtual void Init(CreateInterfaceFn*, IGet*, IGarrysMod*, CGlobalVarsBase*) = 0;
        virtual void Shutdown() = 0;
        virtual void SetupNetworkString(INetworkStringTableContainer*) = 0;
        virtual void Think() = 0;
        virtual void StartLua() = 0;
        virtual void ServerDetails(const char*, const char*, const char*, int, const char*) = 0;
        virtual void OnLuaError(CLuaError*, IAddonsSystem::Information*) = 0;
        virtual void SendProblemToMenu(const char*, int, const char*) = 0;
        virtual void IsServerBlacklisted(const char*, const char*, const char*, const char*, const char*) = 0;
    };
}

#endif