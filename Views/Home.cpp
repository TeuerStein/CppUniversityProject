//
// Created by OLEKSANDR SOKOLOV on 12/27/20.
//

#include <iostream>
#include "../Models/Hero.cpp"

namespace Views {
	void home () {
		
		if (system("CLS")) system("clear");

		std::cout << "Program was working\n\n";

		Models::Hero hero;
		hero.set_name_of_hero(Models::get_a_hero_name());

		std::cout << "Name of Hero is: " << hero.get_name_of_hero() << "\n\n";

		hero.set_class_of_hero(Models::get_a_class_of_hero());

		std::cout << "Name of class: " << hero.get_name_of_class() << "\n";
		std::cout << "Damage: " << hero.get_damage() << "\n";
		std::cout << "Health: " << hero.get_health() << "\n";
		std::cout << "Armor: " << hero.get_armor() << "\n";
		std::cout << "Type of damage: " << hero.get_type_of_damage() << "\n";
        
    	}
}
