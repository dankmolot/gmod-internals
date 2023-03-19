local current_dir = _SCRIPT_DIR

function IncludeGMODInternals()
    local refcount = IncludePackage "gmod-internals"
    local _project = project()

    externalincludedirs { current_dir .. "/include" }

    if refcount == 1 then
        dofile(current_dir .. "/premake5_create_project.lua")
        project(_project.name)
    end
end