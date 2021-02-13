#include <iostream>
#include <stdlib.h>
#include "DefaultMobs/DefaultMobs.cpp"
#include "EpicMobs/EpicMobs.cpp"

#ifndef CPPUNIVERSITYPROJECT_BATTLE_H
#define CPPUNIVERSITYPROJECT_BATTLE_H

namespace Models {
    void murlocs_attack(DefaultMobs::Murloc *murloc, Hero *hero) {
        // Murloc attack function

        // If random value will be 5
        // Murloc shall miss next attack
        int miss = (rand() % 5) + 5;
        if (miss == 6) {
            std::cout << "* " << murloc->get_name() << " missed *\n\n";
            return;
        }

        std::cout << "* Damage from " << murloc->get_name() << " *\n";

        // Damage to Hero's armor
        int heroArmor = hero->get_armor() - murloc->get_damage();

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

    void kobolds_attack(DefaultMobs::Kobold *kobold, Hero *hero) {
        // Kobold attack function

        // If random value will be 5
        // Kobold shall miss next attack
        int miss = (rand() % 7) + 5;
        if (miss == 5) {
            std::cout << "* " << kobold->get_name() << " missed *\n\n";
            return;
        }

        std::cout << "* Damage from " << kobold->get_name() << " *\n";

        // Damage to Hero's armor
        int heroArmor = hero->get_armor() - kobold->get_damage();

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

    void minotaurs_attack(EpicMobs::Minotaur *minotaur, Hero *hero) {
        // Minotaur attack function

        // If random value will be 5
        // Minotaur shall miss next attack
        int miss = (rand() % 5) + 5;
        if (miss == 6) {
            std::cout << "* " << minotaur->get_name() << " missed *\n\n";
            return;
        }

        std::cout << "* Damage from " << minotaur->get_name() << " *\n";

        // Damage to Hero's armor
        int heroArmor = hero->get_armor() - minotaur->get_damage();

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

    void hero_attack_murloc(Hero *hero, DefaultMobs::Murloc *murloc) {
        // Hero attacks function

        // If random value will be 1
        // Hero shall miss next attack
        int miss = (rand() % 5) + 1;
        if (miss == 1) {
            std::cout << "* " << hero->get_name_of_hero() << " missed *\n\n";
            return;
        }

        std::cout << "* Make the damage for " << murloc->get_name() << " *\n";

        // If hero's type of damage == enemy's type of resist
        // damage from hero will be 1/2
        int heroDamage;
        if (hero->get_type_of_damage() == murloc->get_resists()) {
            heroDamage = hero->get_damage() / 2;
        } else {
            heroDamage = hero->get_damage();
        }

        // Damage to enemy's armor
        int murlocArmor = murloc->get_armor() - heroDamage;

        // If points of armor more than 0
        // enemy's health will not change
        if (murlocArmor < 0) {
            std::cout << "Given damage: " << murlocArmor * (-1) << "\n";

            murloc->set_health(murloc->get_health() + murlocArmor);

            std::cout << murloc->get_name() << "'s health: " << murloc->get_health() << "\n";

            if (murloc->get_health() <= 0) {
                std::cout << "* " << murloc->get_name() << " is dead *\n";
            }

        } else {
            std::cout << "Remnants of armor: " << murlocArmor << "\n";
        }
    }

    void hero_attack_kobold(Hero *hero, DefaultMobs::Kobold *kobold) {
        // Hero attacks function

        // If random value will be 1
        // Hero shall miss next attack
        int miss = (rand() % 5) + 1;
        if (miss == 1) {
            std::cout << "* " << hero->get_name_of_hero() << " missed *\n\n";
            return;
        }

        std::cout << "* Make the damage for " << kobold->get_name() << " *\n";

        // If hero's type of damage == enemy's type of resist
        // damage from hero will be 1/2
        int heroDamage;
        if (hero->get_type_of_damage() == kobold->get_resists()) {
            heroDamage = hero->get_damage() / 2;
        } else {
            heroDamage = hero->get_damage();
        }

        // Damage to enemy's armor
        int koboldArmor = kobold->get_armor() - heroDamage;

        // If points of armor more than 0
        // enemy's health will not change
        if (koboldArmor < 0) {
            std::cout << "Given damage: " << koboldArmor * (-1) << "\n";

            kobold->set_health(kobold->get_health() + koboldArmor);

            std::cout << kobold->get_name() << "'s health: " << kobold->get_health() << "\n";

            if (kobold->get_health() <= 0) {
                std::cout << "* " << kobold->get_name() << " is dead *\n";
            }

        } else {
            std::cout << "Remnants of armor: " << koboldArmor << "\n";
        }
    }

    void hero_attack_minotaur(Hero *hero, EpicMobs::Minotaur *minotaur) {
        // Hero attacks function

        // If random value will be 1
        // Hero shall miss next attack
        int miss = (rand() % 5) + 1;
        if (miss == 1) {
            std::cout << "* " << hero->get_name_of_hero() << " missed *\n\n";
            return;
        }

        std::cout << "* Make the damage for " << minotaur->get_name() << " *\n";

        // If hero's type of damage == enemy's type of resist
        // damage from hero will be 1/2
        int heroDamage;
        if (hero->get_type_of_damage() == minotaur->get_resists()) {
            heroDamage = hero->get_damage() / 2;
        } else {
            heroDamage = hero->get_damage();
        }

        // Damage to enemy's armor
        int minotaurArmor = minotaur->get_armor() - heroDamage;

        // If points of armor more than 0
        // enemy's health will not change
        if (minotaurArmor < 0) {
            std::cout << "Given damage: " << minotaurArmor * (-1) << "\n";

            minotaur->set_health(minotaur->get_health() + minotaurArmor);

            std::cout << minotaur->get_name() << "'s health: " << minotaur->get_health() << "\n";

            if (minotaur->get_health() <= 0) {
                std::cout << "* " << minotaur->get_name() << " is dead *\n";
            }

        } else {
            std::cout << "Remnants of armor: " << minotaurArmor << "\n";
        }
    }

    void hero_stats(Hero *hero) {
        std::cout << "Your stats: \n";
        std::cout << "\tName of Hero: " << hero->get_name_of_hero() << "\n";
        std::cout << "\tClass: " << hero->get_name_of_class() << "\n";
        std::cout << "\tDamage: " << hero->get_damage() << "\n";
        std::cout << "\tHealth: " << hero->get_health() << "\n";
        std::cout << "\tArmor: " << hero->get_armor() << "\n";
        std::cout << "\tType of damage: " << hero->get_type_of_damage() << "\n";
        std::cout << "\tLvl: " << hero->get_lvl() << "\n";
        std::cout << "\tCurrent exp: " << hero->get_exp() << "\n\n\n";
    }

    void pause(int dur) {
        int temp = time(NULL) + dur;

        while (temp > time(NULL));
    }
}

#endif
