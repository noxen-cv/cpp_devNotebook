cmake_minimum_required(VERSION 3.15)

# Project configuration
project(cpp_devNotebook 
    VERSION 1.0.0
    DESCRIPTION "A comprehensive C++ learning repository with DSA implementations"
    LANGUAGES CXX
)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Compiler flags
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(
        -Wall                   # Enable all warnings
        -Wextra                 # Enable extra warnings
        -Wpedantic              # Strict ISO C++ compliance
        -Wshadow                # Warn about variable shadowing
        -Wformat=2              # Format string security
        -Wconversion            # Type conversion warnings
        -Wnull-dereference      # Null pointer dereference
    )
    if(CMAKE_BUILD_TYPE MATCHES Debug)
        add_compile_options(-g -O0)    # Debug symbols, no optimization
    else()
        add_compile_options(-O3)        # Maximum optimization
    endif()
elseif(MSVC)
    add_compile_options(/W4 /WX)        # Warning level 4, treat warnings as errors
endif()

# Build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "C++ Compiler: ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "C++ Standard: ${CMAKE_CXX_STANDARD}")

# Options
option(BUILD_EXAMPLES "Build example programs" ON)
option(BUILD_PROJECTS "Build complete projects" ON)
option(BUILD_TESTS "Build unit tests" OFF)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add subdirectories
add_subdirectory(src/fundamentals)
add_subdirectory(src/oop)
add_subdirectory(src/data-structures)

if(BUILD_PROJECTS)
    add_subdirectory(src/projects)
endif()

if(BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()

# Installation rules (optional for future use)
install(DIRECTORY include/ 
    DESTINATION include
    FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp"
)

# Print summary
message(STATUS "")
message(STATUS "========================================")
message(STATUS "  cpp_devNotebook Configuration Summary")
message(STATUS "========================================")
message(STATUS "  Version: ${PROJECT_VERSION}")
message(STATUS "  Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "  C++ Standard: C++${CMAKE_CXX_STANDARD}")
message(STATUS "  Build examples: ${BUILD_EXAMPLES}")
message(STATUS "  Build projects: ${BUILD_PROJECTS}")
message(STATUS "  Build tests: ${BUILD_TESTS}")
message(STATUS "  Install prefix: ${CMAKE_INSTALL_PREFIX}")
message(STATUS "========================================")
message(STATUS "")
