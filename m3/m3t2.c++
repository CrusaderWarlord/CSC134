// CSC 134
// M3T2 - Craps
// belmorea
// 2/16/16
// Start the game of craps
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

// Function
// (Tell the program what the functions will be)
int roll();

// main goes here
int main(){
    // Seed the random number generator
    int seed = time(0);
    srand(seed);

    // Roll zwei dice and show the results
    int first, second, total;
    first = roll();
    second = roll();
    total = first + second;
    cout << "You rolled a " << first << " + " << second << " = " << total << endl;
    return 0;
}

// FUnction definitions
// (Actually write the ENTIRE function)
int roll() {
    // rand()gives a large random number
    // %6 devides by six and keeps a number
    int my_roll = (rand() % 6) + 1;
    return my_roll;
}