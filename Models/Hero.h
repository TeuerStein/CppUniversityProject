#include "ClassesOfHeroes.cpp"

#ifndef CPPUNIVERSITYPROJECT_HERO_H
#define CPPUNIVERSITYPROJECT_HERO_H

namespace Models {
	class Hero {
		std::string nameOfHero;
		std::string nameOfClass;
		int damage;
		int health;
		int armor;
		std::string typeOfDamage;

	public:
		void set_name_of_hero(std::string nameFromInput) {
			nameOfHero = nameFromInput;
		}

		std::string get_name_of_hero() {
			return nameOfHero;
		}

		void set_class_of_hero(char classOfHeroFromInput) {
			if(classOfHeroFromInput == '1') {
				// 1 - Warrior
				Warrior classOfHero;
				classOfHero.build_an_warrior();
				set_all_stats_for_hero(
						classOfHero.get_name_of_class(),
						classOfHero.get_base_damage(),
						classOfHero.get_base_health(),
						classOfHero.get_base_armor(),
						classOfHero.get_type_of_damage()
				);

			} else if(classOfHeroFromInput == '2') {
				// 2 - Mage
				//Mage classOfHero;
                Mage classOfHero;
                set_all_stats_for_hero(
                        classOfHero.get_name_of_class(),
                        classOfHero.get_base_damage(),
                        classOfHero.get_base_health(),
                        classOfHero.get_base_armor(),
                        classOfHero.get_type_of_damage()
                );
			} else if(classOfHeroFromInput == '3') {
				// 3 - Archer
				//Archer classOfHero;
				std::cout << "Archer\n";

			} else {
				std::cout << "Error: You can't choose something deferent than Warrior, Mage or Archer\nPlease, choose something again\n\n";
			}
		}

		void set_all_stats_for_hero(
				std::string nameOfClassFromBuilder,
				int baseDamage,
				int baseHealth,
				int baseArmor,
				std::string typeOfDamageFromBuilder
		) {
			if(nameOfClassFromBuilder == "") {
				nameOfClass = "None";
			} else {
				nameOfClass = nameOfClassFromBuilder;
			}

			if(baseDamage > 12 || baseDamage < 2) {
				damage = 1;
			} else {
				damage = baseDamage;
			}

			if(baseHealth > 50 || baseHealth < 20) {
				health = 1;
			} else {
				health = baseHealth;
			}

			if(baseArmor > 35 || baseArmor < 5) {
				armor = 0;
			} else {
				armor = baseArmor;
			}

			if(typeOfDamageFromBuilder == "") {
				typeOfDamage = "None";
			} else {
				typeOfDamage = typeOfDamageFromBuilder;
			}
		}

		std::string get_name_of_class() {
			return nameOfClass;
		}

		int get_damage() {
			return damage;
		}

		int get_health() {
			return health;
		}

		int get_armor() {
			return armor;
		}

		std::string get_type_of_damage() {
			return typeOfDamage;
		}
	};
}

#endif
