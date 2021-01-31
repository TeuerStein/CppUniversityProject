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
        
    	}
}
