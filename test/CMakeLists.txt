set(GTEST_SHUFFLE 1)

add_executable(
    cpp-test
    main.cpp
    ../app/Arena.cpp
    ../app/AStarAlgorithm.cpp
    ../app/PathOutput.cpp
    ArenaClassTest.cpp
    AStarAlgorithmClassTest.cpp
    PathOutputTest.cpp
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include
                                           ../vendor/googletest/googlemock/include
                                           ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(cpp-test PUBLIC gtest)
