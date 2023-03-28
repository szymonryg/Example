//
// Created by timo0 on 17.03.2023.
//
#include <iostream>
#include "game_view.h"

game_view::game_view(game_model& model) : model(model) {

}

void game_view::update() {
    system("cls");
    std::cout << "Console clicker" << std::endl;
    std::cout << "Level: " << this->model.get_lvl() << std::endl;
    std::cout << "Points: " << this->model.get_points() << std::endl;
}


