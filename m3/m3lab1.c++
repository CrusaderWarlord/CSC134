//Module 3 lLab 1
// belmorea
//2/23/26

#include <iostream>
using namespace std;

// List Prototypes of all choics up here
// rename these choices
void do_choice_swim();
void do_choice_tool();
void do_choice_3();
void do_choice_4();

int main(){



//main() goes here
cout << "Can You Survive" << endl << endl;
cout << "you wake up on an island, you are probably going to die" << endl;
cout << "Do you: " << endl;
cout << "1. attempt to swim away from the island." << endl;
cout << "2. make a tool for self defense." << endl;

int choice;
cin >> choice;

if (1 == choice){
    do_choice_swim();
}
else if (2 == choice){
    do_choice_tool();
}
else {
    cout << "no choice made, you starve" << endl;
}
cout << "Game Over" << endl <<endl;
}

void do_choice_swim() {
    cout << "you jump into the water and swim, you get caught by a current, tire yourself, and drown" << endl;
}

void do_choice_tool(){
        cout << "you broke a peice of rock into a sharp edge, hopefully it can get you something" <<  endl;

}