# Data Structures and Algorithms

# Helper function for DSA executables
function(add_dsa_executables CATEGORY TYPE)
    file(GLOB_RECURSE CPP_FILES "${CMAKE_CURRENT_SOURCE_DIR}/${TYPE}/${CATEGORY}/*.cpp")
    foreach(cpp_file ${CPP_FILES})
        get_filename_component(exec_name ${cpp_file} NAME_WE)
        set(target_name "dsa_${TYPE}_${CATEGORY}_${exec_name}")
        add_executable(${target_name} ${cpp_file})
        set_target_properties(${target_name} PROPERTIES
            OUTPUT_NAME "${exec_name}"
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/data-structures/${TYPE}/${CATEGORY}"
        )
    endforeach()
endfunction()

# Linear data structures
add_dsa_executables(arrays linear)
add_dsa_executables(stacks linear)
add_dsa_executables(queues linear)

# Non-linear data structures
add_dsa_executables(trees non-linear)

message(STATUS "Configured data structures modules")
