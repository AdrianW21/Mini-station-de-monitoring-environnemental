set(SOURCES
        main.cpp
        core/Scheduler.cpp
        sensors/TemperatureSensor.cpp
        comm/Protocol.cpp
)

add_library(environmental_lib ${SOURCES})

target_include_directories(environmental_lib PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(environmental_station main.cpp)

target_link_libraries(environmental_station PRIVATE environmental_lib)