# Object-Oriented Programming modules

# Helper function to add OOP executables
function(add_oop_executables CATEGORY DIFFICULTY)
    file(GLOB_RECURSE CPP_FILES "${CMAKE_CURRENT_SOURCE_DIR}/${DIFFICULTY}/${CATEGORY}/*.cpp")
    foreach(cpp_file ${CPP_FILES})
        get_filename_component(exec_name ${cpp_file} NAME_WE)
        set(target_name "oop_${DIFFICULTY}_${CATEGORY}_${exec_name}")
        add_executable(${target_name} ${cpp_file})
        set_target_properties(${target_name} PROPERTIES
            OUTPUT_NAME "${exec_name}"
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/oop/${DIFFICULTY}/${CATEGORY}"
        )
    endforeach()
endfunction()

# Beginner OOP
add_oop_executables(classes beginner)
add_oop_executables(constructors beginner)

# Intermediate OOP
add_oop_executables(inheritance intermediate)
add_oop_executables(polymorphism intermediate)

# Advanced OOP
add_oop_executables(static-members advanced)

message(STATUS "Configured OOP modules")
