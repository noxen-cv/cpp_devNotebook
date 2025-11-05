# Example Programs

# Helper function for examples
function(add_example_executables DIFFICULTY)
    file(GLOB CPP_FILES "${CMAKE_CURRENT_SOURCE_DIR}/${DIFFICULTY}/*.cpp")
    foreach(cpp_file ${CPP_FILES})
        get_filename_component(exec_name ${cpp_file} NAME_WE)
        set(target_name "example_${DIFFICULTY}_${exec_name}")
        add_executable(${target_name} ${cpp_file})
        set_target_properties(${target_name} PROPERTIES
            OUTPUT_NAME "${exec_name}"
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/examples/${DIFFICULTY}"
        )
    endforeach()
endfunction()

add_example_executables(beginner)
add_example_executables(intermediate)
add_example_executables(advanced)

message(STATUS "Configured example programs")
