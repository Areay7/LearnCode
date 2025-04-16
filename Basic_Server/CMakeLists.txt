cmake_minimum_required(VERSION 3.5)

if(WIN32)
    message("********** WIN32 ***********")
elseif(UNIX)
    message("********** UNIX ***********")
    set(LIB_DIR "/Users/areay7/QtCode/QtProject/RabbitMQ_consumer/thirdparty")
    add_definitions(-D ICE_CPP11_MAPPING)
    add_compile_options("-g")
    add_compile_options("-O0")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})


project(Basic_Server)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_DIR}/bin)

# module
set(MOUDLE_ICE_HEAD ${PROJECT_DIR}/module/Ice)
set(MOUDLE_ICE_SRC  ${PROJECT_DIR}/module/Ice/Custom.cpp ${PROJECT_DIR}/module/Ice/CustomImpl.cpp)




include_directories(${PROJECT_DIR}/include)
include_directories(${MOUDLE_ICE_HEAD})

# thirdparty
include_directories(${LIB_DIR}/Ice-3.7.10_CXX11/include)
include_directories(${LIB_DIR}/Ice-3.7.10_CXX11/include/generated)
# include_directories(${LIB_DIR}/)
# include_directories(${LIB_DIR}/)

link_directories(${LIB_DIR}/Ice-3.7.10_CXX11/lib)

set(SOURCES 
${MOUDLE_ICE_SRC}
./src/IceServer.cpp
./src/main.cpp

)

add_executable(Basic_Server ${SOURCES})
target_link_libraries(Basic_Server Ice++11)