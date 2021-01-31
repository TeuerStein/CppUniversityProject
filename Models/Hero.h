#include "ClassesOfHeroes.cpp"

#ifndef CPPUNIVERSITYPROJECT_HERO_H
#define CPPUNIVERSITYPROJECT_HERO_H

namespace Models {
	class Hero {
		std::string nameOfHero;

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
	};
}

#endif
