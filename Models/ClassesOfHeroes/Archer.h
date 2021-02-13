#include <iostream>
#include <stdlib.h>

#ifndef CPPUNIVERSITYPROJECT_ARCHER_H
#define CPPUNIVERSITYPROJECT_ARCHER_H

namespace ClassesOfHeroes {
    class Archer : Models::TypesOfDamage {
        // Class for getting a Warrior class
        // of hero like a game champ

        // Init all variables what we need for
        std::string nameOfClass = "Archer";
        int baseDamage;
        int baseHealth;
        int baseArmor;
        std::string typeOfDamage;

    public:
        // Getting all variables into constructor
        // for creating a warrior with unique stats

        void build_an_archer() {
            // Setter for all empty variables

            baseDamage = (rand() % 6) + 7;
            baseHealth = (rand() % 10) + 40;
            baseArmor = (rand() % 5) + 4;
            typeOfDamage = get_a_phisical_type_of_damage();

            return;
        }

        // Getters for all variables
        std::string get_name_of_class() {
            return nameOfClass;
        }

        int get_base_damage() {
            return baseDamage;
        }

        int get_base_health() {
            return baseHealth;
        }

        int get_base_armor() {
            return baseArmor;
        }

        std::string get_type_of_damage() {
            return typeOfDamage;
        }
    };
}

#endif
