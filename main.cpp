
#include "Scoreboard.h"
#include "Game.h"
#include <iostream>
#include<string>
#include <stdlib.h>
using namespace std;
using namespace std::literals::chrono_literals;

int main(){
    Game game;
    game.greet();
    string player_name{};
    cin >> player_name;
    game.set_name(player_name);
    game.countdown();
    system("CLS");
    //Game phase ready. To be implemented in future
    //game.set_readiness_to_play(true);
    while(game.get_game_duration() < 60) {
        game.display_streak();
        game.display_points();
        game.display_characters_correct();
        game.display_characters_incorrect();
        game.random_characters();
        system("CLS");
    }
    Scoreboard scoreboard(game);
    cin.ignore();
    return 0;
}
