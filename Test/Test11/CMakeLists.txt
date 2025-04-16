cmake_minimum_required(VERSION 3.5)

if(WIN32)
    message("********** WIN32 ***********")
elseif(UNIX)
    message("********** UNIX ***********")
    set(LIB_DIR "/Users/areay7/QtCode/Qt_learn/MyGit/ToolKit/ToolKit/3rd_party")
    add_definitions(-D ICE_CPP11_MAPPING)
    add_compile_options("-g")
    add_compile_options("-O0")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})


project(Test_0)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_DIR}/bin)


include_directories(${PROJECT_DIR}/include)


# thirdparty
include_directories(${LIB_DIR}/GoogleTest/include/googletest)
include_directories(${LIB_DIR}/GoogleTest/include/googlemock)
link_directories(${LIB_DIR}/GoogleTest/lib/MacOS/arm64)
# End thirdparty 

set(SOURCES 
src/math_utils.cpp
src/string_utils.cpp
)

set(TEST_SOURCES 
test/test_math.cpp
test/test_string.cpp
test/test_main.cpp
)

add_executable(Test_0
    ${SOURCES}
    ${TEST_SOURCES} 
)

target_link_libraries(Test_0 gtest)
target_link_libraries(Test_0 gtest_main)

target_link_libraries(Test_0 gmock)
target_link_libraries(Test_0 gmock_main)


# option(BUILD_TESTS "Build tests" ON)  # 添加编译开关

# if(BUILD_TESTS)
#     enable_testing()
#     add_subdirectory(test)  # 包含测试子目录
# endif()
