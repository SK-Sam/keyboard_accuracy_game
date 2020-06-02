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


void Scoreboard:: calculate_lps(const Game& game){
    lps = game.num_of_correct_characters_per_game / 60.0;
}

void Scoreboard::calculate_accuracy(const Game& game){
    if(game.num_of_correct_characters_per_game < 1.0){
        accuracy = 1.0;
    }
    else{
        accuracy = (game.num_of_correct_characters_per_game / (game.num_of_incorrect_characters_per_game + game.num_of_correct_characters_per_game)) * 100.0;
    }
}

string Scoreboard::get_date(){
    auto now = std::chrono::system_clock::now();
    auto in_time_t = std::chrono::system_clock::to_time_t(now);

    std::stringstream ss;
    ss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %X");
    return ss.str();
}

void Scoreboard::display_stats(Game &game){
    cout << "Total Points: " << game.get_points() << "\n";
    cout << "Highest Streak: " << "Pending function to solve this" << "\n";
    cout << "Correct Inputs: " << game.get_characters_correct() << "\n";
    cout << "Incorrect Inputs: " << game.get_characters_incorrect() << "\n";
    cout << "Accuracy: %" << accuracy << "\n";
    cout << "Letters Per Second: " << lps << "\n\n";
    cout << "Date of Score: " << get_date() << "\n";
}


Scoreboard::Scoreboard(Game& game)
{
    cout << "60 Seconds is up! Here are your statistics, " << game.name << ": \n\n\n";
    calculate_lps(game);
    calculate_accuracy(game);
    display_stats(game);
}