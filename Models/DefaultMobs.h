#include <iostream>
#include <stdlib.h>

namespace Models{
	class Murloc {
		std::string name = "Murloc";
		int damage;
		int health;
		int armor;
		std::string resists = "Magical";
		int lvl = 1;

	public:
		void build_stats_for_murlocs() {
			// Function for build main stats for enemy

			damage = (rand() % 4) + 13;
			health = (rand() % 4) + 15;
			armor = (rand() % 3) + 2;
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

	class Kobold {
		std::string name = "Kobold";
		int damage;
		int health;
		int armor;
		std::string resists = "None";
		int lvl = 1;

	public:
		void build_stats_for_kobold() {
			damage = (rand() % 6) + 1;
			health = (rand() % 5) + 3;
			armor = (rand() % 3) + 3;
		}
	};	
}
