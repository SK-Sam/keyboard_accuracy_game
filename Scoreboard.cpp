//
// Created by yeosa on 3/31/2020.
//

#include "Scoreboard.h"
#include "Game.h"
#include <iostream>
#include <iomanip>
#include<string>
//#include <stdio.h>
//#include <stdlib.h>
#include <time.h>
//#include <conio.h>
//#include <random>
#include <chrono>
//#include <thread>
//#include <windows.h>
using namespace std;


void Scoreboard:: calculate_lpm(const Game& game){
    lpm = game.num_of_correct_characters_per_game / 60.0;
    //cout << game.num_of_correct_characters_per_game << endl;
}

void Scoreboard::calculate_accuracy(const Game& game){
    accuracy = (game.num_of_incorrect_characters_per_game / (game.num_of_incorrect_characters_per_game + game.num_of_correct_characters_per_game)) * 100.0;
    //accuracy = 500.0;
    //cout << "ACCURACY: " << accuracy << endl;
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
    cout << "Accuracy: " << accuracy << "\n";
    cout << "Letters Per Minute: " << lpm << "\n";
}
/*void Scoreboard::game_end_greeting() {
    cout << "60 Seconds is up! Here are your statistics: \n";
}
 */

Scoreboard::Scoreboard(Game& game)
{
    cout << "60 Seconds is up! Here are your statistics: \n";
    calculate_lpm(game);
    calculate_accuracy(game);
    //game_end_greeting();
    display_stats(game);
    set_date();
}