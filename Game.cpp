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
#include <thread>
#include <windows.h>
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

void Game:: add_game_duration(float dur){
    game_duration += dur;
}

void Game:: set_name(string n){
    name = n;
}

void Game:: set_readiness_to_play(bool ready){
    ready_to_play = ready;
}

bool Game:: get_readiness_to_play(){
    return ready_to_play;
}

float Game:: get_duration(){
    return duration;
}

int Game:: get_streak(){
    return streak;
}

bool Game:: get_rw_answer(){
    return right_wrong_answer;
}

float Game:: get_game_duration(){
    return game_duration;
}

void Game:: add_to_correct_characters_per_game(){
    num_of_correct_characters_per_game++;
}

void Game::greet(){
    cout << "Welcome to Typing Statistics. Please enter your first name.\n";
}

void Game::countdown(){
    Sleep(1000);
    cout << "Get ready to start typing in...\n";
    Sleep(500);
    cout << "3...\n";
    Sleep(1000);
    cout << "2...\n";
    Sleep(1000);
    cout << "1...\n";
    Sleep(1000);
}

void Game:: random_characters() {
    int char_ascii_value{get_rand_ascii_value()};
    auto start = chrono::high_resolution_clock::now();
    cout << "\n\n\n" << (char)char_ascii_value << endl;
    int user_input = getch();
    if(user_input == char_ascii_value) {
        cout << "It worked";
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<float> durations = end - start;
        float temp_dur = durations.count();
        set_duration(temp_dur);
        add_game_duration(temp_dur);
        right_wrong_answer = true;
        add_to_correct_characters_per_game();
        add_points();
        streak_counter();
    }
    else{
        cout << "It failed";
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<float> durations = end - start;
        float temp_dur = durations.count();
        set_duration(temp_dur);
        add_game_duration(temp_dur);
        right_wrong_answer = false;
        reset_streak();
    }
}

void Game:: streak_counter(){
    streak++;
}

void Game:: reset_streak(){
    streak = 0;
}

void Game:: add_points() {
    if(get_rw_answer()){
        if(get_duration() <= 1){
            if(get_streak() >= 5){
                points += 15;
            }
            else {
                points += 10;
            }
        }
        else if(get_duration() > 1 && get_duration() <= 3){
            points += 7;
        }
        else{
            points += 4;
        }
    }
}