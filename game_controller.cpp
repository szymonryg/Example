//
// Created by timo0 on 17.03.2023.
//

#include "game_controller.h"

game_controller::game_controller(game_model& model, game_view& view) : model(model), view(view) {

}

void game_controller::launch() {
    this->view.update(model.get_points());
    int key;
    do {
        key = getch();
        if(key == 13) {
            this->model.add_points(1);
            this->view.update(model.get_points());
        }
    }
    while(key != 27);
}

