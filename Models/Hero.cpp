#include "Hero.h"

namespace Models {
	std::string get_a_hero_name() {
		// Function for getting name of Hero

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

	std::string get_a_class_of_hero() {
		// Finction for getting type of class for Hero object

		std::string classOfHero;

		std::cout << "Please, choose class for your Hero: \n\n";
		std::cout << "\tWarrior\n";
		std::cout << "\tMage\n";
		std::cout << "\tArcher\n\n";
		std::cin >> classOfHero;
		std::cout << "\n\n";

		if(classOfHero == "Warrior" ||
		   classOfHero == "warrior" ||
		   classOfHero == "Mage" ||
		   classOfHero == "mage" ||
		   classOfHero == "Archer" ||
		   classOfHero == "archer"
		) {
			return classOfHero;
		} else {
			std::cout << "You need to enter a class of Hero\n";
			return get_a_class_of_hero();
		}
	}
}
