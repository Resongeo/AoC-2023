outputDir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

workspace "AoC-2023"
    architecture "x86_64"

    configurations
    {
        "Debug",
        "Release",
    }

    flags
    {
        "MultiProcessorCompile",
    }

project "AoC-2023"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++20"
    staticruntime "off"

    targetdir ("%{wks.location}/Build/bin/" .. outputDir)
    objdir ("%{wks.location}/Build/bin-int/" .. outputDir)
    debugdir ("%{wks.location}")

    files
    {
        "Source/**.cpp",
        "Source/**.hpp",
        "Source/**.c",
        "Source/**.h",
    }

    includedirs
    {
        "Source",
    }

    filter "configurations:Debug"
        runtime "Debug"
        symbols "on"
    
    filter "configurations:Release"
        runtime "Release"
        optimize "on"
