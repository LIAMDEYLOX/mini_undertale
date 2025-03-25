cmake_minimum_required(VERSION 3.10)
project(UndertaleBossFight C)

# Ajout des options du compilateur
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

# Trouver la bibliothèque ncurses (PDCurses sous Windows/MSYS2)
find_package(PkgConfig REQUIRED)
pkg_check_modules(NCURSES REQUIRED ncurses)

# Ajout du fichier source
add_executable(undertale_boss main.c)

# Lier ncurses à l'exécutable
target_link_libraries(undertale_boss ${NCURSES_LIBRARIES})

# Inclure les headers ncurses
target_include_directories(undertale_boss PRIVATE ${NCURSES_INCLUDE_DIRS})
