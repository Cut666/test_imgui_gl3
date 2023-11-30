cmake_minimum_required(VERSION 3.10)  # Chỉ định phiên bản tối thiểu của CMake

project(myproject)  # Đặt tên dự án

# Thêm chương trình thực thi
add_executable(myprogram main.cpp Dog.cpp Animal.cpp)