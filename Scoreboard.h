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

class Scoreboard{
public:
    Scoreboard(Game& game);

    void calculate_lpm(const Game&);
    void calculate_accuracy(const Game&);
    string get_date();
    void display_stats(Game&);

private:
    double lpm;
    double accuracy;

};


#endif //KEYBOARD_ACCURACY_GAME_SCOREBOARD_H
