cmake_minimum_required(VERSION 3.10)

project(soundwizard LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY   ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/binaries)

if(UNIX)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/binaries/lib)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/binaries/lib)
elseif(WIN32)
    set(TEST_OUTPUT_PATH ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/binaries)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY   ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/binaries)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/binaries)
endif()

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/information.txt
    ${TEST_OUTPUT_PATH}/information.txt
    COPYONLY
)
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/music.wav
    ${TEST_OUTPUT_PATH}/music.wav
    COPYONLY
)

set(UNITTEST ON)

if(UNITTEST)
    add_subdirectory(${PROJECT_SOURCE_DIR}/googletests)
    enable_testing()
endif()

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/signal)
target_link_libraries(${PROJECT_NAME} PUBLIC signal)

add_subdirectory(${PROJECT_SOURCE_DIR}/generators/igenerator)
target_link_libraries(${PROJECT_NAME} PUBLIC igenerator)

add_subdirectory(${PROJECT_SOURCE_DIR}/generators/audiogenerator)
target_link_libraries(${PROJECT_NAME} PUBLIC audiogenerator)

add_subdirectory(${PROJECT_SOURCE_DIR}/generators/audiogenerator/harmonicgenerator)
target_link_libraries(${PROJECT_NAME} PUBLIC harmonicgenerator)

add_subdirectory(${PROJECT_SOURCE_DIR}/genfactory)
target_link_libraries(${PROJECT_NAME} PUBLIC genfactory)

add_subdirectory(${PROJECT_SOURCE_DIR}/parameters/iparameters)
target_link_libraries(${PROJECT_NAME} PUBLIC iparameters)

add_subdirectory(${PROJECT_SOURCE_DIR}/parameters/harmparameters)
target_link_libraries(${PROJECT_NAME} PUBLIC harmparameters)

add_subdirectory(${PROJECT_SOURCE_DIR}/parser/readfromfile)
target_link_libraries(${PROJECT_NAME} PUBLIC readfromfile)

add_subdirectory(${PROJECT_SOURCE_DIR}/parser/writetofile)
target_link_libraries(${PROJECT_NAME} PUBLIC writetofile)

add_subdirectory(${PROJECT_SOURCE_DIR}/sound)
target_link_libraries(${PROJECT_NAME} PUBLIC sound)

















