cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

include(FetchContent)
fetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v2.13.9
)
fetchContent_MakeAvailable(Catch2)

add_executable(unit_test 
    catch_main.cpp)

target_link_libraries(unit_test PRIVATE
        Catch2::Catch2)