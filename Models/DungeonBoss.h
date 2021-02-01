//
// Created by OLEKSANDR SOKOLOV on 12/26/20.
//

#ifndef CPPUNIVERSITYPROJECT_DUNGEONBOSS_H
#define CPPUNIVERSITYPROJECT_DUNGEONBOSS_H

namespace Models{
    class DungeonMaster {
        std::string name = "Dungeon Master";
        int damage;
        int health;
        int armor;

    public:
        void build_stats_for_minotaurs() {
            // Function for build main stats for enemy

            damage = (rand() % 15) + 45;
            health = (rand() % 10) + 90;
            armor = (rand() % 5) + 35;
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

#endif //CPPUNIVERSITYPROJECT_DUNGEONBOSS_H
