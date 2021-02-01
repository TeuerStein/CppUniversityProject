#include <iostream>

namespace Models{
	class Minotaur {
		std::string name = "Minotaur";
		int damage;
		int health;
		int armor;
		std::string resists = "Phisical";
		int lvl = 1;

	public:
		void build_stats_for_minotaurs() {
			// Function for build main stats for enemy

			damage = (rand() % 4) + 13;
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
	};
}
