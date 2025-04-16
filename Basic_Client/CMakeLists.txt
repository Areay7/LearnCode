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


project(Basic_Client)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_DIR}/bin)


# module
set(MOUDLE_ICE_HEAD ${PROJECT_DIR}/module/Ice ${PROJECT_DIR}/module/Protobuf)
set(MOUDLE_ICE_SRC  ${PROJECT_DIR}/module/Ice/Custom.cpp  ${PROJECT_DIR}/module/Protobuf/message.pb.cc)
# End module


include_directories(${PROJECT_DIR}/include)
include_directories(${MOUDLE_ICE_HEAD})


# thirdparty
include_directories(${LIB_DIR}/Ice-3.7.10_CXX11/include)
include_directories(${LIB_DIR}/Ice-3.7.10_CXX11/include/generated)
include_directories(${LIB_DIR}/RabbitMQ/include)
include_directories(${LIB_DIR}/Protobuf/include)

link_directories(${LIB_DIR}/Ice-3.7.10_CXX11/lib)
link_directories(${LIB_DIR}/RabbitMQ/lib)
link_directories(${LIB_DIR}/Protobuf/lib)
# End thirdparty 

set(SOURCES 
${MOUDLE_ICE_SRC}
./src/RabbitMQClient.cpp
./src/IceClient.cpp
./src/Runner.cpp
./src/main.cpp
)

add_executable(Basic_Client ${SOURCES})
target_link_libraries(Basic_Client Ice++11)
target_link_libraries(Basic_Client rabbitmq.0.15.0)
target_link_libraries(Basic_Client protobuf)
