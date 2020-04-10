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
    //Constructors
   Game();
    Game(string n);
    Game(const Game &source);

    //Getters
    bool get_rw_answer();
    float get_duration();
    //Setters
    void set_duration(float &);
    void set_name(string);

    void random_characters();
    int get_rand_ascii_value();
    void add_points(bool);

private:
    int points;
    float duration;
    bool right_wrong_answer;
    string name;
};


#endif //KEYBOARD_ACCURACY_GAME_GAME_H
