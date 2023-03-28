//
// Created by timo0 on 17.03.2023.
//

#include "game_model.h"

int game_model::get_points() {
    return this->points;
}

int game_model::get_lvl() {
    return this->lvl;
}

int game_model::get_next_lvl_points() {
    return this->points_for_next_lvl;
}

void game_model::add_points() {
    this->points += this->multiplier;
}

void game_model::lvl_up() {
    this->lvl += 1;
    this->points_for_next_lvl *= 2;
    if(this->lvl % 3 == 0) {
        this->multiplier += 1;
    }
}






