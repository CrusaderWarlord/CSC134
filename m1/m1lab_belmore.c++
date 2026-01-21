//CSC 134
// M1LAB1
// alexander belmore
// 1/21/2026

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Declare my variables
    double item_cost = 30;
    int item_count = 50;
    string item_name = "firewood";  // use whatever you want instead
    double total_cost;


    // Magic words to set to 2 decimal places - requires <iomanip>
    cout << setprecision(2) << fixed;

    //Do the work - welcome them to the store
    cout << " Welcome to the " << item_name << " store " << endl;
    cout << "We have " << item_count << " " << item_name << "." << endl;
    cout << "they cost $ " << item_cost << " each." << endl;

    // calculate the total price
    total_cost = item_count * item_cost;
    // Print the total
    cout << "To buy all of them will cost $" << total_cost << endl;
    return 0;

}