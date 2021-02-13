#include <iostream>

namespace Models {
  class TypesOfDamage{
      // Class for creating types
      // of damage for all of game classes

      public:
  std::string phisical = "Phisical";
  std::string magical = "Magical";

  std::string get_a_phisical_type_of_damage() {
    // getter for phisical variable

    return phisical;
      }

  std::string get_a_magical_type_of_damage() {
    // getter for magical variable

    return magical;
  }
};
}
