#include <iostream>

namespace EpicMobs {
  class Minotaur {
		std::string name = "Minotaur";
		int damage;
		int health;
		int armor;
		std::string resists = "None";
		int lvl = 1;

	public:
		void build_stats_for_minotaurs() {
			// Function for build main stats for enemy

			damage = (rand() % 4) + 8;
			health = (rand() % 4) + 25;
			armor = (rand() % 3) + 4;
		}

		// Getters for all of stats
		std::string get_name(){
			return name;
		}

		int get_damage() {
			return damage;
		}

		int get_health() {
			return health;
		}

		int get_armor() {
			return armor;
		}

		std::string get_resists() {
			return resists;
		}

		int get_lvl() {
			return lvl;
		}

		// Setter for health & armor
		void set_health(int newHealth) {
			health = newHealth;
		}

		void set_armor(int newArmor) {
			armor = newArmor;
		}

		// Setter for lvl
		void set_lvl(int newLvl) {
			lvl = newLvl;
		}

        void update_lvl(int modifier) {
            lvl = modifier;

            if(lvl == 2) {
                modifier_2();
            } else if(lvl == 3) {
                modifier_3();
            } else if(lvl == 4) {
                modifier_4();
            }
        }

        void modifier_2() {
            damage += 5;
            health += 10;
            armor += 3;
        }

        void modifier_3() {
            modifier_2();

            damage += 7;
            health += 12;
            armor += 5;
        }

        void modifier_4() {
            modifier_3();

            damage += 9;
            health += 15;
            armor += 7;
        }
	};
}
