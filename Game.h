//
// Created by yeosa on 3/31/2020.
//

#ifndef KEYBOARD_ACCURACY_GAME_GAME_H
#define KEYBOARD_ACCURACY_GAME_GAME_H
#include <iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <random>
#include <chrono>
#include "Scoreboard.h"
#include "Game.h"
using namespace std;

class Game {
public:
    bool random_characters();
    int get_rand_ascii_value();
    int point_multiplier();
    void point_deductor();
    void set_duration(float &);
    float get_duration();

private:
    int point_reward;
    float duration;
};


#endif //KEYBOARD_ACCURACY_GAME_GAME_H
