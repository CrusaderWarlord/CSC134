/*
M6T1 - Baisc Arrays
belmorea
4/13/26
*/

#include <iostream>
using namespace std;

int main() {

    // Set up Variables
    const int SIZE =5;
    int cars[SIZE];
    double sum = 0;
    double average;

    cout << "This program will ask you to enter a count of cars seen." << endl;

    for (int i=0; i<SIZE; i++) {
        cout << "Day " << i+1 << ": " ;
        cin >> cars[i];
    }
    // second loop: sum and average
    for (int i=0; i<SIZE; i++) {
        average = sum / SIZE;
        cout << "Over " << SIZE << " days," << endl;
        cout << "Total cars: " << sum << endl;
        cout << "Average:    " << average << endl;
    }
}