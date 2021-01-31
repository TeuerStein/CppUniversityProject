#include <iostream>
#include "Hero.h"

namespace Models {
	std::string get_a_hero_name() {

		std::string nameForHero;

		std::cout << "Please, enter a name for your Hero: \n";
		std::cin >> nameForHero;
		
		if(nameForHero != "") {
			return nameForHero;
		} else {
			std::cout << "You need to enter a name of Hero\n";
			get_a_hero_name();
			return "Error: this variable is empty";
		}
	}
}
