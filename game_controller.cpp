//
// Created by timo0 on 17.03.2023.
//

#include "game_controller.h"

game_controller::game_controller(game_model& model, game_view& view) : model(model), view(view) {

}

void game_controller::launch() {
    this->view.update();
    int key;
    do {
        key = getch();
        if(key == 13) {
            this->model.add_points();
            if(this->model.get_points() >= this->model.get_next_lvl_points()) {
                this->model.lvl_up();
            }
            this->view.update(); // można by dodać procent zapełnienia pasek który by się zapełniał
        }
    }
    while(key != 27);
}

