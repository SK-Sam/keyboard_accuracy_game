#include <iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <random>
#include <chrono>
#include <thread>
#include "Scoreboard.h"
#include "Game.h"
using namespace std;
using namespace std::literals::chrono_literals;

//float calculate_wpm();
//void stats_page();
    //show wpm, accuracy, # of errors, # of correct inputs, highest streak
//int point_multiplier();
//int point_deductor();


int main(){
    Game game;
    cout << game.greeting;
    string player_name{};
    cin >> player_name;
    game.set_name(player_name);
    game.countdown();
    system("CLS");

    game.random_characters();
    system("CLS");
    cout << game.get_duration() << " seconds.";
    cin.ignore();
    return 0;
}
