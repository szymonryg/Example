#include "game_controller.h"

int main() {
    game_model model;
    game_view view(model);
    game_controller game(model, view);

    game.launch();
    return 0;
}
