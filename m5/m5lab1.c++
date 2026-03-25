// Module 5 Lab 1
// belmorea
// 3/25/26

#include <iostream>
using namespace std;

int main() {
    string peoples;
    string race;
    string character_class;
    int might;
    int toughness;
    int intellect;
    int perserverance;
    int dexterity;
    int speed;
    int charisma;

    cout << "Who are you?" << endl;
    cout << "Man, " << "Beast, " << "I'm sorry, what???" << endl;
    cin >> peoples;

    if ("Man" == peoples || "Humanoid" == peoples){
        cout << "Human" << endl;
        cout << "Elf" << endl;
        cout << "Dwarf" << endl;
        cout << "Ogre" << endl;
        cin >> race;

    }
    else if ("Beast" == peoples || "Bestial" == peoples){
        cout << "Arachnian" << endl;
        cout << "Salamandrine" << endl;
        cout << "Raptorian" << endl;
        cout << "Lizard Man" <<endl;
        cin >> race;

    }
    else if ("I'm sorry, what???" == peoples || "Unusual" == peoples){
        cout << "Atheztug/Peseudodeus" << endl;
        cout << "Daedron/Peseudodiabolus" << endl;
        cout << "Draconian/Peseudodraconis" << endl;
        cin >> race;

    }
    else{
        peoples == "Humanoid";
    }

    if ("Human" == race){
        might = 40;
        intellect = 30;
        perserverance = 35;
        dexterity = 40;
        speed = 45;
        toughness = 50; 
        charisma = 35;
    }
    else if ("Elf" == race){
         might = 30;
        intellect = 45;
        perserverance = 50;
        dexterity = 45;
        speed = 40;
        toughness = 40; 
        charisma = 35;
    }
     else if ("Dwarf" == race){
         might = 45;
        intellect = 40;
        perserverance = 40;
        dexterity = 30;
        speed = 35;
        toughness = 50; 
        charisma = 35;
    }
     else if ("Ogre" == race){
         might = 50;
        intellect = 35;
        perserverance = 40;
        dexterity = 30;
        speed = 40;
        toughness = 45; 
        charisma = 35;
    }
    else if ("Arachnian" == race){
         might = 40;
        intellect = 35;
        perserverance = 35;
        dexterity = 50;
        speed = 45;
        toughness = 40; 
        charisma = 30;
    }
}

