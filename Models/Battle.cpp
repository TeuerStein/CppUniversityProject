#include "Battle.h"

namespace Models {
  int battle(Hero *hero, int modifier) {
      // Function for battle session

      const int randomMob = (rand() % 3) + 1;

      int round = 1;

      int heroHealthBeforeFight = hero->get_health();

      if (randomMob == 1) {
          DefaultMobs::Murloc murloc;
          murloc.build_stats_for_murlocs();
          murloc.update_lvl(modifier);

          std::cout << "\tYour opponent will be " << murloc.get_name() << "\n\n";

          pause(2);

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

              pause(2);

              // Murloc's attack
              murlocs_attack(&murloc, hero);

              pause(2);
              std::cout << "\n";

              // Hero's attack
              hero_attack_murloc(hero, &murloc);
              if (murloc.get_health() <= 0) {
                  hero->set_exp(hero->get_exp() + (100 * modifier));

                  std::cout << "\nYou take +" << 100 * modifier << "exp\n\n";
              }

              pause(3);
              round++;

              std::cout << "\n\n";

          } while (hero->get_health() > 0 && murloc.get_health() > 0);

          std::cout << "End of Battle\n\n";

      } else if (randomMob == 2) {
          DefaultMobs::Kobold kobold;
          kobold.build_stats_for_kobolds();
          kobold.update_lvl(modifier);

          std::cout << "\tYour opponent will be " << kobold.get_name() << "\n\n";

          pause(2);

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
              hero_stats(hero);

              // Count of rounds
              std::cout << "\t\tRound " << round << "\n\n";

              pause(2);

              // Kobold's attack
              kobolds_attack(&kobold, hero);

              pause(2);
              std::cout << "\n";

              // Hero's attack
              hero_attack_kobold(hero, &kobold);
              if (kobold.get_health() <= 0) {
                  hero->set_exp(hero->get_exp() + (100 * modifier));

                  std::cout << "\nYou take +" << 100 * modifier << "exp\n\n";
              }

              pause(3);
              round++;

              std::cout << "\n\n";

          } while (hero->get_health() > 0 && kobold.get_health() > 0);

          std::cout << "End of Battle\n\n";


      } else if (randomMob == 3) {
          EpicMobs::Minotaur minotaur;
          minotaur.build_stats_for_minotaurs();
          minotaur.update_lvl(modifier);

          std::cout << "\tYour opponent will be " << minotaur.get_name() << "\n\n";

          pause(2);

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
              hero_stats(hero);

              // Count of rounds
              std::cout << "\t\tRound " << round << "\n\n";

              pause(2);

              // Murloc's attack
              minotaurs_attack(&minotaur, hero);

              pause(2);
              std::cout << "\n";

              // Hero's attack
              hero_attack_minotaur(hero, &minotaur);
              if (minotaur.get_health() <= 0) {
                  hero->set_exp(hero->get_exp() + (100 * modifier));

                  std::cout << "\nYou take +" << 100 * modifier << "exp\n\n";
              }

              pause(3);
              round++;

              std::cout << "\n\n";

          } while (hero->get_health() > 0 && minotaur.get_health() > 0);

          std::cout << "End of Battle\n\n";
      }

      hero->set_health(heroHealthBeforeFight);

      return hero->get_exp();
  }
}
