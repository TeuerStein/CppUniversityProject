#include <iostream>
#include "Hero.h"

namespace Models {
	std::string get_a_hero_name() {
		std::string nameForHero;

		std::cout << "Please, enter a name for your Hero: ";
		std::cin >> nameForHero;
		
		if(nameForHero != "") {
			return nameForHero;
		} else {
			std::cout << "You need to enter a name of Hero\n";
			get_a_hero_name();
		}
	}

	char get_a_class_of_hero() {
		char classOfHero;

		std::cout << "Please, choose class for your Hero: \n\n";
		std::cout << "1 - Warrior\n";
		std::cout << "2 - Mage\n";
		std::cout << "3 - Archer\n";
		std::cin >> classOfHero;

		if(classOfHero != 00) {
			return classOfHero;
		} else {
			std::cout << "You need to enter a class of Hero\n";
			get_a_class_of_hero();
		}
	}
}
