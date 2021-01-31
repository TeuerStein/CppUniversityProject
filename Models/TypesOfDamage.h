#include <iostream>

#ifndef CPPUNIVERSITYPROJECT_TYPESOFDAMAGE_H
#define CPPUNIVERSITYPROJECT_TYPESOFDAMAGE_H

namespace Models{
    class TypesOfDamage{
        // Class for creating types
        // of damage for all of game classes

        public:
		std::string phisical = "Phisical";
		std::string magical = "Magical";

		std::string set_a_phisical_type_of_damage() {
			return phisical;
	    	}

		std::string set_a_magical_type_of_damage() {
			return magical;
		}
    };
}

#endif
