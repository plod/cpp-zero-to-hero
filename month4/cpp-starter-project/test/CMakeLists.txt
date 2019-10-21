add_executable(cpp-starter-tests main.cpp ../src/getMeHello.cpp)
target_link_libraries(cpp-starter-tests CONAN_PKG::gtest)
target_include_directories(cpp-starter-tests PRIVATE ../src)

add_test(NAME cpp-starter-tests COMMAND $<TARGET_FILE:cpp-starter-tests> --gtest_color=yes)
