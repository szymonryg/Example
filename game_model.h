//
// Created by timo0 on 17.03.2023.
//

#ifndef EXAMPLE_GAME_MODEL_H
#define EXAMPLE_GAME_MODEL_H


class game_model {
public:
   int get_points();
   void add_points(int p);

private:
    int points = 0;
};


#endif //EXAMPLE_GAME_MODEL_H
