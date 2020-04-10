//
// Created by yeosa on 3/31/2020.
//

#ifndef KEYBOARD_ACCURACY_GAME_GAME_H
#define KEYBOARD_ACCURACY_GAME_GAME_H
#include <iostream>
#include <string>
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
    int get_streak();

    //Setters
    void set_duration(float &);
    void set_name(string);
    void add_points();
    void add_to_correct_characters_per_game();
    void streak_counter();
    void reset_streak();

    void random_characters();
    int get_rand_ascii_value();

private:
    int points;
    float duration;
    bool right_wrong_answer;
    string name;
    int num_of_correct_characters_per_game;
    int streak;
};


#endif //KEYBOARD_ACCURACY_GAME_GAME_H
