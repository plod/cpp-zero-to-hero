add_executable(cpp-starter-tests main.cpp)
target_link_libraries(cpp-starter-tests CONAN_PKG::gtest)

add_test(NAME cpp-starter-tests COMMAND $<TARGET_FILE:cpp-starter-tests>)
