#include <iostream>
#include <stdlib.h>
#include "DefaultMobs.cpp"
#include "EpicMobs.cpp"

#ifndef CPPUNIVERSITYPROJECT_BATTLE_H
#define CPPUNIVERSITYPROJECT_BATTLE_H

namespace Models {
    void murlocsAttack(Murloc *, Hero *);

    int koboldsAttack(Kobold, Hero);

    int minotaursAttack(Minotaur, Hero);

    void heroAttackMurloc(Hero *, Murloc *);

    int heroAttackKobold(Hero, Kobold);

    int heroAttackMinotaur(Hero, Minotaur);

    void hero_stats(Hero);

    void pause(int dur);

    int battle(Hero *hero, int modifier) {
        // Function for battle session

        int randomMob = 1;//(rand() % 3) + 1;

        int round = 1;

        int heroHealthBeforeFight = hero->get_health();

        if (randomMob == 1) {
            Murloc murloc;
            murloc.build_stats_for_murlocs();
            murloc.update_lvl(modifier);

            std::cout << "\tYour opponent will be " << murloc.get_name() << "\n\n";

            pause(5);

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
                hero_stats(*hero);

                // Count of rounds
                std::cout << "\t\tRound " << round << "\n\n";

                pause(3);

                // Murloc's attack
                murlocsAttack(&murloc, hero);

                pause(3);
                std::cout << "\n";

                // Hero's attack
                heroAttackMurloc(hero, &murloc);
                if (murlocHealth <= 0) {
                    hero->set_exp(hero->get_exp() + 100 * modifier);

                    std::cout << "\nYou take +" << 100 * modifier << "exp\n\n";

                    break;
                }

                // Set the new values of health
                murloc.set_health(murlocHealth);

                pause(5);
                round++;

                std::cout << "\n\n";

            } while (hero->get_health() > 0 && murloc.get_health() > 0);

            std::cout << "End of Battle\n\n";

        } else if (randomMob == 2) {
            Kobold kobold;
            kobold.build_stats_for_kobolds();
            kobold.update_lvl(modifier);

            std::cout << "\tYour opponent will be " << kobold.get_name() << "\n\n";

            pause(5);

            int heroHealth;
            int koboldHealth;
            do {
                system("clear");

                // Kobold's stats
                std::cout << "Kobold's stats: \n";
                std::cout << "\tDamage: " << kobold.get_damage() << "\n";
                std::cout << "\tHealth: " << kobold.get_health() << "\n";
                std::cout << "\tArmor: " << kobold.get_armor() << "\n";
                std::cout << "\tResists: " << kobold.get_resists() << "\n";
                std::cout << "\tLvl: " << kobold.get_lvl() << "\n\n";

                // Hero's stats
                hero_stats(*hero);

                // Count of rounds
                std::cout << "\t\tRound " << round << "\n\n";

                pause(3);

                // Kobold's attack
                heroHealth = koboldsAttack(kobold, *hero);
                if (heroHealth <= 0) {
                    break;
                }

                pause(3);
                std::cout << "\n";

                // Hero's attack
                koboldHealth = heroAttackKobold(*hero, kobold);
                if (koboldHealth <= 0) {
                    int moreExp = hero->get_exp();
                    moreExp += 100 * modifier;
                    hero->set_exp(moreExp);

                    std::cout << "\nYou take +" << 100 * modifier << "exp\n\n";

                    break;
                }

                // Set the new values of health
                hero->set_health(heroHealth);
                kobold.set_health(koboldHealth);

                pause(5);
                round++;

                std::cout << "\n\n";

            } while (hero->get_health() > 0 && kobold.get_health() > 0);

            std::cout << "End of Battle\n\n";


        } else if (randomMob == 3) {
            Minotaur minotaur;
            minotaur.build_stats_for_minotaurs();
            minotaur.update_lvl(modifier);

            std::cout << "\tYour opponent will be " << minotaur.get_name() << "\n\n";

            pause(5);

            int heroHealth;
            int minotaurHealth;
            do {
                system("clear");

                // Minotaur's stats
                std::cout << "Minotaur's stats: \n";
                std::cout << "\tDamage: " << minotaur.get_damage() << "\n";
                std::cout << "\tHealth: " << minotaur.get_health() << "\n";
                std::cout << "\tArmor: " << minotaur.get_armor() << "\n";
                std::cout << "\tResists: " << minotaur.get_resists() << "\n";
                std::cout << "\tLvl: " << minotaur.get_lvl() << "\n\n";

                // Hero's stats
                hero_stats(*hero);

                // Count of rounds
                std::cout << "\t\tRound " << round << "\n\n";

                pause(3);

                // Murloc's attack
                heroHealth = minotaursAttack(minotaur, *hero);
                if (heroHealth <= 0) {
                    break;
                }

                pause(3);
                std::cout << "\n";

                // Hero's attack
                minotaurHealth = heroAttackMinotaur(*hero, minotaur);
                if (minotaurHealth <= 0) {
                    int moreExp = hero->get_exp();
                    moreExp += 100 * modifier;
                    hero->set_exp(moreExp);

                    std::cout << "\nYou take +" << 100 * modifier << "exp\n\n";

                    break;
                }

                // Set the new values of health
                hero->set_health(heroHealth);
                minotaur.set_health(minotaurHealth);

                pause(5);
                round++;

                std::cout << "\n\n";

            } while (hero->get_health() > 0 && minotaur.get_health() > 0);

            std::cout << "End of Battle\n\n";
        }

        hero->set_health(heroHealthBeforeFight);

        return hero->get_exp();
    }

    void murlocsAttack(Murloc *murloc, Hero *hero) {
        // Murloc attack function

        // If random value will be 5
        // Murloc shall miss next attack
        int miss = (rand() % 5) + 5;
        if (miss == 6) {
            std::cout << "* Murloc missed *\n\n";
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

    int koboldsAttack(Kobold kobold, Hero hero) {
        // Kobold attack function

        // If random value will be 5
        // Kobold shall miss next attack
        int miss = (rand() % 7) + 5;
        if (miss == 5) {
            std::cout << "* Kobold missed *\n\n";
            return hero.get_health();
        }

        std::cout << "* Damage from " << kobold.get_name() << " *\n";

        // Damage to Hero's armor
        int heroArmor = hero.get_armor() - kobold.get_damage();

        std::cout << "Hero's armor: " << heroArmor << "\n";

        // If points of armor more than 0
        // Hero's health will not change
        if (heroArmor < 0) {
            int heroHealth = hero.get_health() + heroArmor;

            std::cout << "Hero's health: " << heroHealth << "\n";

            if (heroHealth <= 0) {
                std::cout << "* You are dead *\n";
                exit(0);
            }

            return heroHealth;
        }

        return hero.get_health();
    }

    int minotaursAttack(Minotaur minotaur, Hero hero) {
        // Minotaur attack function

        // If random value will be 5
        // Minotaur shall miss next attack
        int miss = (rand() % 5) + 5;
        if (miss == 6) {
            std::cout << "* Minotaur missed *\n\n";
            return hero.get_health();
        }

        std::cout << "* Damage from " << minotaur.get_name() << " *\n";

        // Damage to Hero's armor
        int heroArmor = hero.get_armor() - minotaur.get_damage();

        std::cout << "Hero's armor: " << heroArmor << "\n";

        // If points of armor more than 0
        // Hero's health will not change
        if (heroArmor < 0) {
            int heroHealth = hero.get_health() + heroArmor;

            std::cout << "Hero's health: " << heroHealth << "\n";

            if (heroHealth <= 0) {
                std::cout << "* You are dead *\n";
                exit(0);
            }

            return heroHealth;
        }

        return hero.get_health();

    }

    void heroAttackMurloc(Hero *hero, Murloc *murloc) {
        // Hero attacks function

        // If random value will be 1
        // Hero shall miss next attack
        int miss = (rand() % 5) + 1;
        if (miss == 1) {
            std::cout << "* Hero missed *\n\n";
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
        if (murlocArmor <= 0) {
            std::cout << "Given damage: " << murlocArmor * (-1) << "\n";

            murloc->set_health(murloc->get_health() + murlocArmor);

            std::cout << "Murloc's health: " << murloc->get_health() << "\n";

            if (murloc->get_health() <= 0) {
                std::cout << "* Murloc is dead *\n";
            }

        } else {
            std::cout << "Remnants of armor: " << murlocArmor << "\n";
        }
    }

    int heroAttackKobold(Hero hero, Kobold kobold) {
        // Hero attacks function

        // If random value will be 1
        // Hero shall miss next attack
        int miss = (rand() % 5) + 1;
        if (miss == 1) {
            std::cout << "* Hero missed *\n\n";
            return kobold.get_health();
        }

        std::cout << "* Make the damage for " << kobold.get_name() << " *\n";

        // If hero's type of damage == enemy's type of resist
        // damage from hero will be 1/2
        int heroDamage;
        if (hero.get_type_of_damage() == kobold.get_resists()) {
            heroDamage = hero.get_damage() / 2;
        } else {
            heroDamage = hero.get_damage();
        }

        // Damage to enemy's armor
        int koboldArmor = kobold.get_armor() - heroDamage;

        std::cout << "Kobold's armor: " << koboldArmor << "\n";

        // If points of armor more than 0
        // enemy's health will not change
        if (koboldArmor < 0) {
            int koboldHealth = kobold.get_health() + koboldArmor;

            std::cout << "Kobold's health: " << koboldHealth << "\n";

            if (koboldHealth <= 0) {
                std::cout << "* Kobold is dead *\n";
            }

            return koboldHealth;
        }

        return kobold.get_health();
    }

    int heroAttackMinotaur(Hero hero, Minotaur minotaur) {
        // Hero attacks function

        // If random value will be 1
        // Hero shall miss next attack
        int miss = (rand() % 5) + 1;
        if (miss == 1) {
            std::cout << "* Hero missed *\n\n";
            return minotaur.get_health();
        }

        std::cout << "* Make the damage for " << minotaur.get_name() << " *\n";

        // If hero's type of damage == enemy's type of resist
        // damage from hero will be 1/2
        int heroDamage;
        if (hero.get_type_of_damage() == minotaur.get_resists()) {
            heroDamage = hero.get_damage() / 2;
        } else {
            heroDamage = hero.get_damage();
        }

        // Damage to enemy's armor
        int minotaurArmor = minotaur.get_armor() - heroDamage;

        std::cout << "Minotaur's armor: " << minotaurArmor << "\n";

        // If points of armor more than 0
        // enemy's health will not change
        if (minotaurArmor < 0) {
            int minotaurHealth = minotaur.get_health() + minotaurArmor;

            std::cout << "Minotaur's health: " << minotaurHealth << "\n";

            if (minotaurHealth <= 0) {
                std::cout << "* Minotaur is dead *\n";
            }

            return minotaurHealth;
        }

        return minotaur.get_health();
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

        while (temp > time(NULL));
    }
}

#endif