#include <iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <random>
#include <chrono>

using namespace std;

bool random_characters();
int get_rand_ascii_value();


int main(){
  random_characters();
  system("CLS");
  random_characters();
  system("CLS");
  return 0;
}

int get_rand_ascii_value() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine eng(seed);
    uniform_int_distribution<int> distribution(97, 122);
    int random_ascii{distribution(eng)};
    return random_ascii;
}


bool random_characters() {
    int char_ascii_value{get_rand_ascii_value()};
    cout << (char)char_ascii_value << endl;
    int user_input = getch();
    if(user_input == char_ascii_value) {
        cout << "It worked";
        return true;
    }
    else{
        cout << "It failed";
        return true;
    }
}
