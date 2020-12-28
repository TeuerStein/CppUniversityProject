cmake_minimum_required(VERSION 3.17)
project(CppUniversityProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppUniversityProject main.cpp Models/ClassesOfHeroes.cpp Models/ClassesOfHeroes.h Models/Hero.cpp Models/Hero.h Models/DefaultMobs.cpp Models/DefaultMobs.h Models/EpicMobs.cpp Models/EpicMobs.h Models/DungeonBoss.cpp Models/DungeonBoss.h Models/TypesOfDamage.cpp Models/TypesOfDamage.h Views/Home.cpp)