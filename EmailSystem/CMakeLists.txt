cmake_minimum_required(VERSION 3.5)

if(WIN32)
    message("********** WIN32 ***********")
elseif(UNIX)
    message("********** UNIX ***********")
    set(LIB_DIR "/Users/areay7/QtCode/QtProject/RabbitMQ_consumer/thirdparty")
    add_compile_options("-g")
    add_compile_options("-O0")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})


project(EmailSystem)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_DIR}/bin)



include_directories(${PROJECT_DIR}/include)
include_directories(${MOUDLE_ICE_HEAD})


# thirdparty
include_directories(${LIB_DIR}/Curl/include)
link_directories(${LIB_DIR}/Curl/lib)
# End thirdparty 

set(SOURCES 
./src/main.cpp
)

add_executable(EmailSystem ${SOURCES})
target_link_libraries(EmailSystem curl)
