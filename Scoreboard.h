//
// Created by yeosa on 3/31/2020.
//

#ifndef KEYBOARD_ACCURACY_GAME_SCOREBOARD_H
#define KEYBOARD_ACCURACY_GAME_SCOREBOARD_H
#include <iostream>
#include <string>
#include <conio.h>
#include <random>
#include <chrono>
#include <thread>
#include "Game.h"
using namespace std;
using namespace std::literals::chrono_literals;

class Scoreboard{
private:
    float lpm;
    float accuracy;

public:
    void calculate_lpm(Game game);
    void calculate_accuracy();
    void display_stats();

};


#endif //KEYBOARD_ACCURACY_GAME_SCOREBOARD_H
