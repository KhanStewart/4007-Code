//
// Created by User on 26/02/2020.
//


#include "npc_enemy.h"
#include "coordinate.h"

using namespace std;
Hostile_NPC::Hostile_NPC(const std::string & name, std::unique_ptr<World> & world) : Non_Player_Character(name, C::NPC_HOSTILE_FACTION_ID, world) {}

const vector<string> Hostile_NPC::get_new_hostile_id(const std::unique_ptr<World> & world, const std::map<std::string, std::shared_ptr<Character>> & character) {
    std::vector<std::string> hostile_ids;

    // extract location coordinates
    const int x = location.get_x(), y = location.get_y();

    if (current_health > 0) {
        if (moving == true) {
            Combat();
        } else {
            delay;
        }

        if (hostile_ids.size() == 0) { return (const vector<basic_string<char>> &) ""; }


        return hostile_ids;
    }
}
