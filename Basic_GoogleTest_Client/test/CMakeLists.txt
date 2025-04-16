cmake_minimum_required(VERSION 3.5)

set(ICE_GENERATED_SOURCES
    ${CMAKE_SOURCE_DIR}/module/Ice/Custom.cpp
    ${CMAKE_SOURCE_DIR}/module/Protobuf/message.pb.cc
)

# 查找googletest
find_package(GTest REQUIRED)
include_directories(
    ${GTEST_INCLUDE_DIRS}
    ${PROJECT_DIR}/include
    ${PROJECT_DIR}/module/Ice
    ${PROJECT_DIR}/module/Protobuf
)

# 添加测试可执行文件
add_executable(run_tests
    test_ice_client.cpp
    test_rabbitmq_client.cpp
    ${PROJECT_DIR}/src/IceClient.cpp  # 避免链接问题
    ${PROJECT_DIR}/src/RabbitMQClient.cpp
    ${ICE_GENERATED_SOURCES}
)

# 链接库
target_link_libraries(run_tests
    GTest::GTest
    GTest::Main
    pthread
    Ice++11
    rabbitmq.0.15.0
    protobuf
)

# 注册到CTest
add_test(NAME all_tests COMMAND run_tests)
