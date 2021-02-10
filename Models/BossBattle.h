#include <iostream>
#include <stdlib.h>
#include "DungeonBoss.cpp"

#ifndef CPPUNIVERSITYPROJECT_BOSSBATTLE_H
#define CPPUNIVERSITYPROJECT_BOSSBATTLE_H

namespace Models {
    void boss_attack(DungeonMaster *, Hero *);

    void hero_attack_boss(Hero *, DungeonMaster *);

    void boss_battle(Hero *hero) {
        // Function for battle session with Boss

        int round = 1;

        int heroHealthBeforeFight = hero->get_health();

        DungeonMaster dungeonMaster;
        dungeonMaster.build_stats_for_boss();

        std::cout << "\tYour opponent will be " << dungeonMaster.get_name() << "\n\n";

        pause(2);

        do {
            system("clear");

            // Boss's stats
            std::cout << dungeonMaster.get_name() << "'s stats: \n";
            std::cout << "\tDamage: " << dungeonMaster.get_damage() << "\n";
            std::cout << "\tHealth: " << dungeonMaster.get_health() << "\n";
            std::cout << "\tArmor: " << dungeonMaster.get_armor() << "\n";
            std::cout << "\tResists: " << dungeonMaster.get_resists() << "\n";

            // Hero's stats
            hero_stats(hero);

            // Count of rounds
            std::cout << "\t\tRound " << round << "\n\n";

            pause(2);

            // Boss's attack
            boss_attack(&dungeonMaster, hero);

            pause(2);
            std::cout << "\n";

            // Hero's attack
            hero_attack_boss(hero, &dungeonMaster);
            if (dungeonMaster.get_health() <= 0) {
                // If Boss dies Hero will take exp

                hero->set_exp(hero->get_exp() + 10000);

                std::cout << "\nYou take +" << 10000 << "exp\n\n";
            }

            pause(3);
            round++;

            std::cout << "\n\n";

            // If someone died battle will ended
        } while (hero->get_health() > 0 && dungeonMaster.get_health() > 0);

        std::cout << "End of Battle\n\n";

        // Reset a Hero's health for next fights
        hero->set_health(heroHealthBeforeFight);
    }

    void boss_attack(DungeonMaster *dungeonMaster, Hero *hero) {
        // Dungeon Master attack function

        std::cout << "* Damage from " << dungeonMaster->get_name() << " *\n";

        // Damage to Hero's armor
        int heroArmor = hero->get_armor() - dungeonMaster->get_damage();

        if (heroArmor >= 0) {
            std::cout << hero->get_name_of_hero() << "'s armor: " << heroArmor << "\n";
        }

        // If points of armor more than 0
        // Hero's health will not change
        if (heroArmor < 0) {
            std::cout << "Taken damage: " << heroArmor * (-1) << "\n";

            hero->set_health(hero->get_health() + heroArmor);

            if (hero->get_health() <= 0) {
                std::cout << "* You are dead *\n";
                exit(0);
            }
        } else {
            std::cout << "Remnants of armor: " << heroArmor << "\n";
        }
    }

    void hero_attack_boss(Hero *hero, DungeonMaster *dungeonMaster) {
        // Hero attacks function

        // If random value will be 1
        // Hero shall miss next attack
        int miss = (rand() % 5) + 1;
        if (miss == 1) {
            std::cout << "* " << hero->get_name_of_hero() << " missed *\n\n";
            return;
        }

        std::cout << "* Make the damage for " << dungeonMaster->get_name() << " *\n";

        // If hero's type of damage == enemy's type of resist
        // damage from hero will be 1/2
        int heroDamage;
        if (hero->get_type_of_damage() == dungeonMaster->get_resists()) {
            heroDamage = hero->get_damage() / 2;
        } else {
            heroDamage = hero->get_damage();
        }

        // Damage to enemy's armor
        int bossArmor = dungeonMaster->get_armor() - heroDamage;

        if (bossArmor >= 0) {
            std::cout << dungeonMaster->get_name() << "'s armor: " << bossArmor << "\n";
        }

        // If points of armor more than 0
        // enemy's health will not change
        if (bossArmor < 0) {
            std::cout << "Given damage: " << bossArmor * (-1);

            dungeonMaster->set_health(dungeonMaster->get_health() + bossArmor);

            std::cout << dungeonMaster->get_name() << "'s health: " << dungeonMaster->get_health() << "\n";

            if (dungeonMaster->get_health() <= 0) {
                std::cout << "* " << dungeonMaster->get_name() << "is dead *\n";
            } else {
                std::cout << "Remnants of armor: " << bossArmor << "\n";
            }
        }
    }

}

#endif