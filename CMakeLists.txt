cmake_minimum_required(VERSION 3.31)
project(Mini_Station_Environnemental)

set(CMAKE_CXX_STANDARD 20) #Utilise la version C++20 du langage pour compiler ce projet
set(CMAKE_CXX_STANDARD_REQUIRED ON) #La version demandée (ici C++20) doit impérativement être respectée. Si le compilateur ne la supporte pas, échoue

#sous-dossier source
add_subdirectory(src)

#sous-dossier test
enable_testing()
add_subdirectory(tests)
