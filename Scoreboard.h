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
//#include "Game.h"
using namespace std;
class Game;

class Scoreboard{
public:
    //Scoreboard(Game game);

    void calculate_lpm(Game);
    void calculate_accuracy(Game);
    void set_date();
    void display_stats();
    void game_end_greeting();

private:
    float lpm;
    float accuracy;

};


#endif //KEYBOARD_ACCURACY_GAME_SCOREBOARD_H
