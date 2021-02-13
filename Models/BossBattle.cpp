#include "BossBattle.h"

namespace Models {
  void boss_battle(Hero *hero) {
      // Function for battle session with Boss

      int round = 1;

      int heroHealthBeforeFight = hero->get_health();

      BossOfDungeon::DungeonMaster dungeonMaster;
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
}
