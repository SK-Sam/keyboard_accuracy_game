//
// Created by yeosa on 3/31/2020.
//

#include "Scoreboard.h"
#include "Game.h"
#include <iostream>
#include <iomanip>
#include<string>
#include <time.h>
#include <chrono>
using namespace std;


void Scoreboard:: calculate_lpm(const Game& game){
    lpm = game.num_of_correct_characters_per_game / 60.0;
}

void Scoreboard::calculate_accuracy(const Game& game){
    if(game.num_of_correct_characters_per_game < 1.0){
        accuracy = 1.0;
    }
    else{
        accuracy = (game.num_of_correct_characters_per_game / (game.num_of_incorrect_characters_per_game + game.num_of_correct_characters_per_game)) * 100.0;
    }
}

void Scoreboard::set_date(){
    chrono::system_clock::time_point now = chrono::system_clock::now();
    time_t t_c = chrono::system_clock::to_time_t(now);
    cout <<"The date is: " <<  put_time(localtime(&t_c), "%F %T");
}

void Scoreboard::display_stats(Game &game){
    cout << "Total Points: " << game.get_points() << "\n";
    cout << "Highest Streak: " << "Pending function to solve this" << "\n";
    cout << "Correct Inputs: " << game.get_characters_correct() << "\n";
    cout << "Incorrect Inputs: " << game.get_characters_incorrect() << "\n";
    cout << "Accuracy: %" << accuracy << "\n";
    cout << "Letters Per Minute: " << lpm << "\n";
}


Scoreboard::Scoreboard(Game& game)
{
    cout << "60 Seconds is up! Here are your statistics, " << game.name << ": \n\n\n";
    calculate_lpm(game);
    calculate_accuracy(game);
    display_stats(game);
    set_date();
}