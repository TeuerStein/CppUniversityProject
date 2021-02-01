#include "ClassesOfHeroes.cpp"

#ifndef CPPUNIVERSITYPROJECT_HERO_H
#define CPPUNIVERSITYPROJECT_HERO_H

namespace Models {
	class Hero {
		// Main class where we will build Hero for Dungeon

		std::string nameOfHero;
		std::string nameOfClass;
		int damage;
		int health;
		int armor;
		std::string typeOfDamage;
		int lvl = 1;
		int exp = 0;

	public:
		void set_name_of_hero(std::string nameFromInput) {
			// Setter for name of Hero

			nameOfHero = nameFromInput;
		}

		std::string get_name_of_hero() {
			// Getter for name of Hero

			return nameOfHero;
		}

		void set_class_of_hero(std::string classOfHeroFromInput) {
			// Init  classOfHero and set all empty 
			// variables in set_all_stats_for_hero function

			if(classOfHeroFromInput == "Warrior" ||
					classOfHeroFromInput == "warrior") {
				Warrior classOfHero;
				classOfHero.build_an_warrior();
				set_all_stats_for_hero(
					classOfHero.get_name_of_class(),
					classOfHero.get_base_damage(),
					classOfHero.get_base_health(),
					classOfHero.get_base_armor(),
					classOfHero.get_type_of_damage()
				);

			} else if(classOfHeroFromInput == "Mage" ||
					classOfHeroFromInput == "mage") {
				Mage classOfHero;
				classOfHero.build_an_mage();
                		set_all_stats_for_hero(
                        		classOfHero.get_name_of_class(),
                        		classOfHero.get_base_damage(),
                        		classOfHero.get_base_health(),
                        		classOfHero.get_base_armor(),
                        		classOfHero.get_type_of_damage()
                		);
			} else if(classOfHeroFromInput == "Archer" ||
					classOfHeroFromInput == "archer") {
				Archer classOfHero;
				classOfHero.build_an_archer();
				set_all_stats_for_hero(
					classOfHero.get_name_of_class(),
					classOfHero.get_base_damage(),
					classOfHero.get_base_health(),
					classOfHero.get_base_armor(),
					classOfHero.get_type_of_damage()
				);

			} else {
				std::cout << "Error: You can't choose something deferent than Warrior, Mage or Archer\n\n";
			}
		}

		void set_all_stats_for_hero(
				std::string nameOfClassFromBuilder,
				int baseDamage,
				int baseHealth,
				int baseArmor,
				std::string typeOfDamageFromBuilder
		) {
			// Setter for all of empty variables

			if(nameOfClassFromBuilder == "") {
				nameOfClass = "None";
			} else {
				nameOfClass = nameOfClassFromBuilder;
			}

			if(baseDamage > 13 || baseDamage < 2) {
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

	
		// Getters for name of class & stats
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

		int get_lvl() {
			return lvl;
		}

		int get_exp() {
			return exp;
		}

		// Setters for lvl & exp
		void set_lvl(int newLvl){ 
			lvl = newLvl;
		}

		void set_exp(int moreExp){
			exp = moreExp;
		}

		// Setter for health & armor
		void set_health(int newHealth) {
			health = newHealth;
		}

		void set_armor(int newArmor) {
			armor = newArmor;
		}

		// Setter for update hero to another lvl
		void update_lvl() {
			if(exp >= 1200 && exp < 2400) {
				if(lvl < 2) {
					lvl = 2;
					lvl_2();
				}
			} else if(exp >= 2400 && exp < 3600) {
				if(lvl < 3) {
					lvl = 3;
					lvl_3();
				}
			} else if(exp >= 3600) {
				if(lvl < 4) {
					lvl = 4;
					lvl_4();
				}
			}
		}

		void lvl_2() {
			damage += 35;
			health += 25;
			armor += 10;
		}

		void lvl_3() {
			damage += 40;
			health += 35;
			armor += 12;
		}

		void lvl_4() {
			damage += 45;
			health += 40;
			armor += 15;
		}

	};
}

#endif
