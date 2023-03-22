//
// Created by timo0 on 17.03.2023.
//

#ifndef EXAMPLE_GAME_CONTROLLER_H
#define EXAMPLE_GAME_CONTROLLER_H

#include <string>
#include <conio.h>
#include "game_model.h"
#include "game_view.h"

class game_controller {

public:
    explicit game_controller(game_model& model, game_view& view);
    void launch();
private:
    game_model& model;
    game_view& view;
};


#endif //EXAMPLE_GAME_CONTROLLER_H
