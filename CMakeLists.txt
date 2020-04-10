cmake_minimum_required(VERSION 3.15)
project(keyboard_accuracy_game)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(keyboard_accuracy_game
    keyboard_game_idea.docx
    main.cpp Scoreboard.cpp Scoreboard.h Game.cpp Game.h Timer.cpp Timer.h)
