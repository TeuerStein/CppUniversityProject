#include <iostream>
#include <stdlib.h>
#include "DungeonBoss.cpp"

namespace Models {
	int bossAttack(DungeonMaster, Hero);

    int heroAttackBoss(Hero, DungeonMaster);

    void battle(Hero hero) {
        // Function for battle session
        
        int randomMob = (rand() % 3) + 1;

        int round = 1;
        
        int heroHealthBeforeFight = hero.get_health();

        DungeonMaster dungeonMaster;
        dungeonMaster.build_stats_for_boss();

        std::cout << "\tYour opponent will be " << dungeonMaster.get_name() << "\n\n";
            
        pause(5);

        int heroHealth;
        int bossHealth;
        do {
            system("clear");
                   
            // Murloc's stats
            std::cout << "Dungeon Master's stats: \n";
            std::cout << "\tDamage: " << dungeonMaster.get_damage() << "\n";
            std::cout << "\tHealth: " << dungeonMaster.get_health() << "\n";
            std::cout << "\tArmor: " << dungeonMaster.get_armor() << "\n";
            std::cout << "\tResists: " << dungeonMaster.get_resists() << "\n";

            // Hero's stats
            hero_stats(hero);

            // Count of rounds
            std::cout << "\t\tRound " << round << "\n\n";

            pause(3);
                        
            // Murloc's attack
            heroHealth = bossAttack(dungeonMaster, hero);
            if(heroHealth <= 0) {
                break;
            }

            pause(3);
            std::cout << "\n";

            // Hero's attack
            bossHealth = heroAttackBoss(hero, dungeonMaster);
            if(bossHealth <= 0) {
                int moreExp = hero.get_exp();
                moreExp += 10000;
                hero.set_exp(moreExp);

                std::cout << "\nYou take +" << moreExp << "exp\n\n";

                break;
            }

            // Set the new values of health
            hero.set_health(heroHealth);
            dungeonMaster.set_health(bossHealth);

            pause(5);
            round++;

            std::cout << "\n\n";

        } while(hero.get_health() > 0 && dungeonMaster.get_health() > 0);

        std::cout << "End of Battle\n\n";
        
        hero.set_health(heroHealthBeforeFight);
    }

    int bossAttack(DungeonMaster dungeonMaster, Hero hero) {
        // Dungeon Master attack function

        std::cout << "* Damage from " << dungeonMaster.get_name() << " *\n";
        
        // Damage to Hero's armor
        int heroArmor = hero.get_armor() - dungeonMaster.get_damage();

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

    int heroAttackBoss(Hero hero, DungeonMaster dungeonMaster){
        // Hero attacks function

        // If random value will be 1
        // Hero shall miss next attack
        int miss = (rand() % 5) + 1;
        if(miss == 1) {
            std::cout << "Hero missed\n\n";
            return dungeonMaster.get_health();
        }

        std::cout << "* Get damage to " << dungeonMaster.get_name() << " *\n";
        
        // If hero's type of damage == enemy's type of resist
        // damage from hero will be 1/2
        int heroDamage;
        if(hero.get_type_of_damage() == dungeonMaster.get_resists()) {
            heroDamage = hero.get_damage() / 2;
        } else {
            heroDamage = hero.get_damage();
        }

        // Damage to enemy's armor
        int bossArmor = dungeonMaster.get_armor() - heroDamage;

        std::cout << "Dungeon Master's armor: " << bossArmor << "\n";

        // If points of armor more than 0
        // enemy's health will not change
        if(bossArmor < 0) {
            int bossHealth = dungeonMaster.get_health() + bossArmor;

            std::cout << "Dungeon Master's health: " << bossHealth << "\n";

            if(bossHealth <= 0) {
                std::cout << "Dungeon Master is dead\n";
            }

            return bossHealth;
        }

        return dungeonMaster.get_health();
    }
}

