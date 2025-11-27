#Création d'une variable local contenant tout les fichiers sources
set(SOURCES
        main.cpp
        core/Scheduler.cpp
        sensors/TemperatureSensor.cpp
        comm/Protocol.cpp
)

#Ajout de la librairie "environmental_lib" avec les fichiers sources
add_library(environmental_lib ${SOURCES})

#Inclusion des headers
target_include_directories(environmental_lib PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(environmental_station main.cpp)

target_link_libraries(environmental_station PRIVATE environmental_lib)