project "gmod-internals"
    kind "StaticLib"
    location("projects/" .. os.target() .. "/" .. _ACTION)
    targetdir "%{prj.location}/%{cfg.architecture}/%{cfg.buildcfg}"
    debugdir "%{prj.location}/%{cfg.architecture}/%{cfg.buildcfg}"
    objdir "!%{prj.location}/%{cfg.architecture}/%{cfg.buildcfg}/intermediate/%{prj.name}"

    language "C++"
    cppdialect "C++17"

    IncludeSDKCommon()
    -- IncludeSDKTier0()
    -- IncludeSDKTier1()

    vpaths {
        ["include"] = { "*.hpp" }
    }

    files { "include/**.hpp" }


