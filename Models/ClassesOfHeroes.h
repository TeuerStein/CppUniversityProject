                                                                                                            //
// Created by OLEKSANDR SOKOLOV on 12/26/20.
//

#include <iostream>
#include <stdlib.h>
#include "TypesOfDamage.cpp"

#ifndef CPPUNIVERSITYPROJECT_CLASSESOFHEROES_H
#define CPPUNIVERSITYPROJECT_CLASSESOFHEROES_H

namespace Model {
    class Warrior: TypesOfDamage {
        // Class for getting a Warrior class
        // of hero like a game champ

        // Init all variables what we need for
        std::string nameOfClass = "Warrior";
        int baseDamage;
        int baseHealth;
        int baseArmor;
        std::string typeOfDamage;

    public:
        // Getting all variables into constructor
        // for creating a warrior with unique stats

	TypesOfDamage typesOfDamage;

        void constructor_for_warrior_model() {
            baseDamage = (rand() % 13) + 2;
            baseHealth = (rand() % 10) + 40;
            baseArmor = (rand() % 10) + 25;
            typeOfDamage = typesOfDamage.set_a_phisical_type_of_damage();;

            return;
        }
    };
}

#endif //CPPUNIVERSITYPROJECT_CLASSESOFHEROES_H
