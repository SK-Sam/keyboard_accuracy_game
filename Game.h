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
    friend class Scoreboard;

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
    int get_points();
    int get_characters_correct();
    int get_characters_incorrect();

    //Setters
    void set_duration(float &);
    void set_name(string);
    void add_points();
    void add_to_correct_characters_per_game();
    void add_to_incorrect_characters_per_game();
    void streak_counter();
    void reset_streak();
    void set_readiness_to_play(bool);
    void add_game_duration(float);

    void random_characters();
    int get_rand_ascii_value();
    void countdown();
    void display_streak();
    void display_points();
    void display_characters_correct();
    void display_characters_incorrect();

    //Game strings
    void greet();

private:
    int points;
    float duration;
    float game_duration = 0;
    bool right_wrong_answer;
    string name;
    int num_of_correct_characters_per_game = 0;
    int num_of_incorrect_characters_per_game = 0;
    int streak = 0;
    bool ready_to_play;
};


#endif //KEYBOARD_ACCURACY_GAME_GAME_H
