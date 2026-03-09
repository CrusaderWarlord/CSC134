/*

*/

#include<iostream>
using namespace std;

// Functions declared
void question_1();

// main
int main() {
    question_1();
}

// full questions
void question_1(){
    string answer;

    cout << "Hello, I am a c++ program" << endl;
    cout << "Are you accepting of me" << endl;
    cin >> answer;


if (answer == "yes"){
    cout << "great I hope we will get along"<< endl;
    
    }
else if (answer == "no"){
    cout << "well I hope you will one day learn to appreciate me" << endl;
}
else {
    cout << "No answer provided" << endl;
}
}





void secondary(){

    string answer;

    cout << "What is 4+8" << endl;

    cin >> answer;

    if (answer == "12"|| answer == "Twelve"){
        cout << "correct" << endl;
    }

    else {
        cout << "incorrect" << endl;
    }
}