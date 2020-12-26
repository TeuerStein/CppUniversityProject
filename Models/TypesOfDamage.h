//
// Created by OLEKSANDR SOKOLOV on 12/26/20.
//

#include <iostream>

#ifndef CPPUNIVERSITYPROJECT_TYPESOFDAMAGE_H
#define CPPUNIVERSITYPROJECT_TYPESOFDAMAGE_H

namespace Model{
    struct TypesOfDamage{
        // Structure for creating types
        // of damage for all of game classes

        static inline const std::string phisical = "Phisical";
        static inline const std::string magical = "Magical";
    } typeOfDamage_t;
}

#endif //CPPUNIVERSITYPROJECT_TYPESOFDAMAGE_H
