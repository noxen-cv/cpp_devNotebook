# Fundamentals: Basic C++ concepts organized by difficulty

# Helper function to add executables from a directory
function(add_fundamentals_executables CATEGORY DIFFICULTY)
    file(GLOB CPP_FILES "${CMAKE_CURRENT_SOURCE_DIR}/${DIFFICULTY}/${CATEGORY}/*.cpp")
    foreach(cpp_file ${CPP_FILES})
        get_filename_component(exec_name ${cpp_file} NAME_WE)
        set(target_name "fundamentals_${DIFFICULTY}_${CATEGORY}_${exec_name}")
        add_executable(${target_name} ${cpp_file})
        set_target_properties(${target_name} PROPERTIES
            OUTPUT_NAME "${exec_name}"
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/fundamentals/${DIFFICULTY}/${CATEGORY}"
        )
    endforeach()
endfunction()

# Beginner level
add_fundamentals_executables(operators beginner)
add_fundamentals_executables(flow-control beginner)
add_fundamentals_executables(loops beginner)

# Intermediate level
add_fundamentals_executables(functions intermediate)
add_fundamentals_executables(arrays intermediate)
add_fundamentals_executables(strings intermediate)
add_fundamentals_executables(multidimensional-arrays intermediate)
add_fundamentals_executables(structs-unions intermediate)

# Advanced level
add_fundamentals_executables(pointers advanced)
add_fundamentals_executables(references advanced)
add_fundamentals_executables(templates advanced)

message(STATUS "Configured fundamentals modules")
