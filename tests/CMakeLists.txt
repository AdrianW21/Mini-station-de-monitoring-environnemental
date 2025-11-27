add_executable(test_sensors test_sensors.cpp)

target_link_libraries(test_sensors PRIVATE environmental_lib)

add_test(NAME sensor_tests COMMAND test_sensors)