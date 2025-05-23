cmake_minimum_required(VERSION 3.20)

# define project metadata

    project(exercise3 LANGUAGES CXX
                    DESCRIPTION "exercise7"
                    HOMEPAGE_URL "https://sgit.iue.tuwien.ac.at/360062/exercise7")

# setting required language standards

    set(CMAKE_CXX_STANDARD 20)
    set(CMAKE_CXX_STANDARD_REQUIRED True)
    set(CMAKE_CXX_EXTENSIONS OFF)

# misc settings 

    # avoid ctest dashboard targets
    set_property(GLOBAL PROPERTY CTEST_TARGETS_ADDED 1)
    # generate a compile_commands.json
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON) 
    # make all symbols visible on windows (which is default on unix)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) 

# options

    option(BUILD_TESTING "enable testing with ctest" ON)

# testing

    include(CTest)

# get/setup dependencies

    include_directories(include)

# include own targets

    add_executable(task1 task1.main.cpp)
    add_test(NAME task1 COMMAND task1 WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
    set_property(TEST task1 PROPERTY PASS_REGULAR_EXPRESSION ".*360050.*electromagnetic")

    add_executable(task2 task2.test.cpp)
    add_test(NAME task2 COMMAND task2 WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})

    add_executable(task3 task3.test.cpp)
    add_test(NAME task3 COMMAND task3 WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})


