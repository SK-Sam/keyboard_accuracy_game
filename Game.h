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
    bool get_readiness_to_play();
    float get_game_duration();

    //Setters
    void set_duration(float &);
    void set_name(string);
    void add_points();
    void add_to_correct_characters_per_game();
    void streak_counter();
    void reset_streak();
    void set_readiness_to_play(bool);
    void add_game_duration(float);

    void random_characters();
    int get_rand_ascii_value();
    void countdown();

    //Game strings
    void greet();

private:
    int points;
    float duration;
    float game_duration = 0;
    bool right_wrong_answer;
    string name;
    int num_of_correct_characters_per_game;
    int streak;
    bool ready_to_play;
};


#endif //KEYBOARD_ACCURACY_GAME_GAME_H
