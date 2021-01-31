#include <iostream>
#include <stdlib.h>

namespace Models{
	class Murloc {
		std::string name = "Murloc";
		int damage;
		int health;
		std::string resists = "Magical";

	public:
		constructor_for_murlocs() {
			damage = (rand() % 3) + 1;
			health = (rand() % 4) + 2;
		}
	};
}
