cmake_minimum_required (VERSION 3.0)
project (cpp-starter-project)

#From: https://docs.conan.io/en/latest/howtos/cmake_launch.html
#Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/master/conan.cmake"
                  "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)
#Make sure conan is available
conan_check(REQUIRED)
#Add and import project dependencies; build if binary not available
conan_cmake_run(REQUIRES 
                  gtest/1.8.1@bincrafters/stable
                BASIC_SETUP 
                CMAKE_TARGETS
                BUILD missing)

#Add project source directory
add_subdirectory(src)

#Add project testing
enable_testing()
add_subdirectory(test)
