cmake_minimum_required(VERSION 3.10)
project(mini_undertale C)

set(CMAKE_C_STANDARD 99)

# Include et lib pour Allegro via MSYS2 MinGW64
include_directories("C:/msys64/mingw64/include")
link_directories("C:/msys64/mingw64/lib")

add_executable(mini_undertale main.c)

# Obligatoire pour que la fenêtre s'ouvre correctement
target_link_libraries(mini_undertale allegro allegro_main)
