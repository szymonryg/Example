//
// Created by timo0 on 17.03.2023.
//

#ifndef EXAMPLE_GAME_MODEL_H
#define EXAMPLE_GAME_MODEL_H


class game_model {
public:
   int get_points();
   int get_lvl();
   int get_next_lvl_points();
   void add_points();
   void lvl_up();

private:
    int points = 0;
    int lvl = 1;
    int points_for_next_lvl = 10;
    int multiplier = 1;
};


#endif //EXAMPLE_GAME_MODEL_H
