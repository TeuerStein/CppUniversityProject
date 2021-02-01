#include <iostream>
#include "../Models/Hero.cpp"
#include "../Models/Battle.cpp""

namespace Views {
	void home () {
		
		if (system("CLS")) system("clear");

		Models::Hero hero;
		hero.set_name_of_hero(Models::get_a_hero_name());

		std::cout << "Name of Hero is: " << hero.get_name_of_hero() << "\n\n";

		hero.set_class_of_hero(Models::get_a_class_of_hero());

		std::cout << "Your stats: \n";
		std::cout << "\tName of class: " << hero.get_name_of_class() << "\n";
		std::cout << "\tDamage: " << hero.get_damage() << "\n";
		std::cout << "\tHealth: " << hero.get_health() << "\n";
		std::cout << "\tArmor: " << hero.get_armor() << "\n";
		std::cout << "\tType of damage: " << hero.get_type_of_damage() << "\n";
		std::cout << "\tLvl: " << hero.get_lvl() << "\n";
		std::cout << "\tCurent exp: " << hero.get_exp() << "\n\n\n\n";

		std::cout << "\t\tLet's go to the dungeon!\n\n\n\n";

		Models::battle(hero);
        
    	}
}
