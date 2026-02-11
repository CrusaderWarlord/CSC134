// MtT1, CSC 134, belmorea, 2/11/26

#include <iostream>
using namespace std;

int main () {
    // As a user, I want to measure entity heath bars so I can see how close I am to defeating an opponent

    // Set up variables
    double enemy_current_health, enemy_max_health, enemy_damage_taken;
    double player_max_health, player_current_health, player_damage_taken;

    //Ask user for info
    cout << "What is your max HP";
    cin >> player_max_health;
    cout << "How wounded are you";
    cin >> player_damage_taken;
    cout << "How tough is your opponent";
    cin >> enemy_max_health;
    cout << "How wounded is your opponent";
    cin>> enemy_damage_taken;

    // Do calculations
    enemy_current_health = enemy_max_health - enemy_damage_taken;
    player_current_health = player_max_health - player_damage_taken;

    // Provide answers
    cout << "You are at " << player_current_health << " remaining.";
    cout << "your opponent is at " << enemy_current_health << " remaning.";

    // Who is closer to defeat
    if (player_current_health < enemy_current_health){
        cout << "Fight Back." << endl;
    }
    if (enemy_current_health < player_current_health){
        cout << "you are closer to victory";
    }
    if (enemy_current_health == player_current_health){
        cout << "Perhaps a stalemate";
    }

}