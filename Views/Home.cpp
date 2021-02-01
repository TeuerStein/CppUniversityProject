#include <iostream>
#include "../Models/Hero.cpp"
#include "../Models/Battle.cpp"
#include "../Models/BossBattle.cpp"

namespace Views {
	void home () {
		
		system("clear");
        
        std::cout << "\t\t\tWelcome to the Dungeon Master\n\n\n\n\n";

		Models::Hero hero;
		hero.set_name_of_hero(Models::get_a_hero_name());

		hero.set_class_of_hero(Models::get_a_class_of_hero());

		std::cout << "Your stats: \n";
        std::cout << "\tName of Hero: " << hero.get_name_of_hero() << "\n";
		std::cout << "\tName of class: " << hero.get_name_of_class() << "\n";
		std::cout << "\tDamage: " << hero.get_damage() << "\n";
		std::cout << "\tHealth: " << hero.get_health() << "\n";
		std::cout << "\tArmor: " << hero.get_armor() << "\n";
		std::cout << "\tType of damage: " << hero.get_type_of_damage() << "\n";
		std::cout << "\tLvl: " << hero.get_lvl() << "\n";
		std::cout << "\tCurent exp: " << hero.get_exp() << "\n\n\n\n";

		std::cout << "\t\tLet's go to the dungeon!\n\n\n\n";

        std::cout << "\t\tWhich modifier of Dungeon you wanna choose ?\n\n";
        std::cout << "From 1-4 will be only default/epic mobs\n";
        std::cout << "But 5 - is the boss of Dungeon called 'Dungeon Master'\n\n";
        
        int modifierChooser;
        std::cin >> modifierChooser;
        
        switch(modifierChooser) {
            case 1:
                Models::battle(hero, 1);
                break;
            case 2:
                Models::battle(hero, 2);
                break;
            case 3:
                Models::battle(hero, 3);
                break;
            case 4:
                Models::battle(hero, 4);
                break;
            case 5:
                Models::battle(hero);
                break;
        }
        
    	}
}
