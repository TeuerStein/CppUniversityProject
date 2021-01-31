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
				std::cout << "Mage\n";

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
			nameOfClass = nameOfClassFromBuilder;
			damage = baseDamage;
			health = baseHealth;
			armor = baseArmor;
			typeOfDamage = typeOfDamageFromBuilder;
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
