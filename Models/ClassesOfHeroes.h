#include <iostream>
#include <stdlib.h>
#include "TypesOfDamage.cpp"

#ifndef CPPUNIVERSITYPROJECT_CLASSESOFHEROES_H
#define CPPUNIVERSITYPROJECT_CLASSESOFHEROES_H

namespace Models {
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

        void build_an_warrior() {
	    // Setter for all empty variables

            baseDamage = (rand() % 3) + 2;
            baseHealth = (rand() % 10) + 40;
            baseArmor = (rand() % 10) + 25;
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

    class Mage: TypesOfDamage {
        // Class for getting a Warrior class
        // of hero like a game champ

        // Init all variables what we need for
        std::string nameOfClass = "Mage";
        int baseDamage;
        int baseHealth;
        int baseArmor;
        std::string typeOfDamage;

    public:
        // Getting all variables into constructor
        // for creating a warrior with unique stats

        void build_an_warrior() {
        // Setter for all empty variables

            baseDamage = (rand() % 3) + 6;
            baseHealth = (rand() % 5) + 20;
            baseArmor = (rand() % 10) + 5;
            typeOfDamage = get_a_magical_type_of_damage();

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

    class Archer: TypesOfDamage {
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

        void build_an_warrior() {
        // Setter for all empty variables

            baseDamage = (rand() % 6) + 4;
            baseHealth = (rand() % 10) + 40;
            baseArmor = (rand() % 10) + 15;
            typeOfDamage = get_a_magical_type_of_damage();

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
