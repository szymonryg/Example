//
// Created by timo0 on 17.03.2023.
//

#ifndef EXAMPLE_GAME_VIEW_H
#define EXAMPLE_GAME_VIEW_H

#include "game_model.h"

class game_view {
public:
    explicit game_view(game_model& model);
    void update();
private:
    game_model& model;
};


#endif //EXAMPLE_GAME_VIEW_H
