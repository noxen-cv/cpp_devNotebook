# Complete Projects

# Calendar System
file(GLOB CALENDAR_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/calendar-system/*.cpp")
if(CALENDAR_SOURCES)
    add_executable(calendar_system ${CALENDAR_SOURCES})
    set_target_properties(calendar_system PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/projects"
    )
endif()

# Enrollment System
file(GLOB ENROLLMENT_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/enrollment-system/*.cpp")
if(ENROLLMENT_SOURCES)
    add_executable(enrollment_system ${ENROLLMENT_SOURCES})
    set_target_properties(enrollment_system PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/projects"
    )
endif()

# Web Browser Simulator
file(GLOB BROWSER_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/web-browser-sim/*.cpp")
if(BROWSER_SOURCES)
    add_executable(web_browser_sim ${BROWSER_SOURCES})
    set_target_properties(web_browser_sim PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/projects"
    )
endif()

message(STATUS "Configured project modules")
