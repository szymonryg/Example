#include "game_controller.h"
#include "game_model.h"

int main() {
    game_model model;
    game_view view;
    game_controller game(model, view);

    game.launch();
    return 0;
}
