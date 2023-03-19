#ifndef GARRYSMOD_INTERNALS_IGET
#define GARRYSMOD_INTERNALS_IGET

class IGet {
public:
    // FIXME
    virtual void OnLoadFailed() = 0;
    virtual void GameDir() = 0;
    virtual void IsDedicatedServer() = 0;
    virtual void GetClientCount() = 0;
    virtual void FileSystem() = 0;
    virtual void LuaShared() = 0;
    virtual void LuaConVars() = 0;
    virtual void MenuSystem() = 0;
    virtual void Resources() = 0;
    virtual void IntroScreen() = 0;
    virtual void Materials() = 0;
    virtual void HTML() = 0;
    virtual void ServerAddons() = 0;
    virtual void SteamHTTP() = 0;
    virtual void SteamRemoteStorage() = 0;
    virtual void SteamUtils() = 0;
    virtual void SteamApps() = 0;
    virtual void SteamScreenshots() = 0;
    virtual void SteamUser() = 0;
    virtual void SteamFriends() = 0;
    virtual void SteamUGC() = 0;
    virtual void SteamGameServer() = 0;
    virtual void SteamNetworking() = 0;
    virtual void Initialize() = 0;
    virtual void ShutDown() = 0;
    virtual void RunSteamCallbacks() = 0;
    virtual void ResetSteamAPIs() = 0;
    virtual void SetMotionSensor() = 0;
    virtual void MotionSensor() = 0;
    virtual void Version() = 0;
    virtual void VersionStr() = 0;
    virtual void Audio() = 0;
    virtual void VersionTimeStr() = 0;
    virtual void Analytics() = 0;
    virtual void BuildName() = 0;
    virtual void UpdateRichPresense() = 0;
    virtual void ResetRichPresense() = 0;
    virtual void FilterText() = 0;
};

#endif