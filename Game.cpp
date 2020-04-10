//
// Created by yeosa on 3/31/2020.
//

#include "Game.h"
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

Game::Game()
    : name{"NONE"}, points{0}
{

}

Game::Game(string n)
    : name{n}, points{0} {}

Game::Game(const Game &source)
    : name{source.name}, points{0} {}

int Game:: get_rand_ascii_value() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine eng(seed);
    uniform_int_distribution<int> distribution(97, 122);
    int random_ascii{distribution(eng)};
    return random_ascii;
}
void Game:: set_duration(float &dur) {
    duration = dur;
}

void Game:: set_name(string n){
    name = n;
}

float Game:: get_duration(){
    return duration;
}

bool Game:: get_rw_answer(){
    return right_wrong_answer;
}


void Game:: random_characters() {
    int char_ascii_value{get_rand_ascii_value()};
     auto start = chrono::high_resolution_clock::now();
    cout << (char)char_ascii_value << endl;
    int user_input = getch();
    if(user_input == char_ascii_value) {
        cout << "It worked";
         auto end = chrono::high_resolution_clock::now();
         chrono::duration<float> durations = end - start;
         float temp_dur = durations.count();
         set_duration(temp_dur);
        right_wrong_answer = true;
    }
    else{
        cout << "It failed";
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<float> durations = end - start;
        float temp_dur = durations.count();
        set_duration(temp_dur);
        right_wrong_answer = false;
    }
}

void Game:: add_points(bool answer) {
    if(answer) {
        points += 10;
    }
}