#include <iostream>
#include "DefaultMobs.cpp"

namespace Models {
	int murlocsAttack(Murloc, Hero);
	void koboldsAttack();
	void minotaursAttack();

	int heroAttackMurloc(Hero, Murloc);
	void heroAttackKobold();
	void heroAttackMinotaur();

	void hero_stats(Hero);
    	void pause(int dur);

	void battle(Hero hero) {
		// Function for battle session
		
		int randomMob = 1;//(rand() % 3) + 1;

		int round = 1;

		if(randomMob == 1) {
			Murloc murloc;
			murloc.build_stats_for_murlocs();

			std::cout << "\tYour opponent will be " << murloc.get_name() << "\n\n";
            
            		pause(5);

			int heroHealth;
			int murlocHealth;
			do {
                		system("clear");
               	
				// Murloc's stats	
                		std::cout << "Murloc's stats: \n";
                		std::cout << "\tDamage: " << murloc.get_damage() << "\n";
                		std::cout << "\tHealth: " << murloc.get_health() << "\n";
                		std::cout << "\tArmor: " << murloc.get_armor() << "\n";
                		std::cout << "\tResists: " << murloc.get_resists() << "\n";
                		std::cout << "\tLvl: " << murloc.get_lvl() << "\n\n";

				// Hero's stats
                		hero_stats(hero);

				// Count of rounds
				std::cout << "\t\tRound " << round << "\n\n";

				pause(3);
                		
				// Murloc's attack
				heroHealth = murlocsAttack(murloc, hero);
				if(heroHealth <= 0) {
					break;
				}

				pause(3);
				std::cout << "\n";

				// Hero's attack
				murlocHealth = heroAttackMurloc(hero, murloc);
				if(murlocHealth <= 0) {
					int moreExp = hero.get_exp();
					moreExp += 100;
					hero.set_exp(moreExp);

					std::cout << "\nYou take +100exp\n\n";

					break;
				}

				// Set the new values of health
				hero.set_health(heroHealth);
				murloc.set_health(murlocHealth);

				pause(5);
				round++;

				std::cout << "\n\n";

			} while(hero.get_health() > 0 && murloc.get_health() > 0);

			std::cout << "End of Battle\n\n";
				
		} else if(randomMob == 2) {

		} else if(randomMob == 3) {

		}
	}

	int murlocsAttack(Murloc murloc, Hero hero) {
		// Murloc attack function

		// If random value will be 5
		// Murloc shall miss next attack
		int miss = (rand() % 5) + 5;
		if(miss == 5) {
			std::cout << "Murloc missed\n\n";
			return hero.get_health();
		}

		std::cout << "* Damage from " << murloc.get_name() << " *\n";
		
		// Damage to Hero's armor 
		int heroArmor = hero.get_armor() - murloc.get_damage();

		std::cout << "Hero's armor: " << heroArmor << "\n";

		// If points of armor more than 0
		// Hero's health will not change
		if(heroArmor < 0) {
			int heroHealth = hero.get_health() + heroArmor;

			std::cout << "Hero's health: " << heroHealth << "\n";

			if(heroHealth <= 0) {
				std::cout << "You are dead\n";
			}

			return heroHealth;
		}

		return hero.get_health();
		
	}

	int heroAttackMurloc(Hero hero, Murloc murloc) {
		// Hero attacks function

		// If random value will be 1
		// Hero shall miss next attack
		int miss = (rand() % 5) + 1;
		if(miss == 1) {
			std::cout << "Hero missed\n\n";
			return murloc.get_health();
		}

		std::cout << "* Get damage to " << murloc.get_name() << " *\n";
		
		// If hero's type of damage == enemy's type of resist
		// damage from hero will be 1/2
		int heroDamage;	
		if(hero.get_type_of_damage() == murloc.get_resists()) {
			heroDamage = hero.get_damage() / 2;
		} else {
			heroDamage = hero.get_damage();
		}

		// Damage to enemy's armor
		int murlocArmor = murloc.get_armor() - heroDamage;

		std::cout << "Murloc's armor: " << murlocArmor << "\n";

		// If points of armor more than 0
		// enemy's health will not change
		if(murlocArmor < 0) {
			int murlocHealth = murloc.get_health() + murlocArmor;

			std::cout << "Murloc's health: " << murlocHealth << "\n";

			if(murlocHealth <= 0) {
				std::cout << "Murloc is dead\n";
			}

			return murlocHealth;
		}

		return murloc.get_health();
	}

	void hero_stats(Hero hero) {
		std::cout << "Your stats: \n";
		std::cout << "\tClass: " << hero.get_name_of_class() << "\n";
		std::cout << "\tDamage: " << hero.get_damage() << "\n";
		std::cout << "\tHealth: " << hero.get_health() << "\n";
		std::cout << "\tArmor: " << hero.get_armor() << "\n";
		std::cout << "\tType of damage: " << hero.get_type_of_damage() << "\n";
		std::cout << "\tLvl: " << hero.get_lvl() << "\n";
		std::cout << "\tCurrent exp: " << hero.get_exp() << "\n\n\n";
	}

    void pause(int dur) {
            int temp = time(NULL) + dur;

            while(temp > time(NULL));
    }
}
