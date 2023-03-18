local current_dir = _SCRIPT_DIR

local function IncludeGMODInternals()
    local refcount = IncludePackage "gmod-internals"
    local _project = project()


    externalincludedirs { current_dir .. "/include" }
end