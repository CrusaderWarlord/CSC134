// Module 5 Lab 1
// belmorea
// 3/25/26

#include <iostream>
using namespace std;

int main() {
    string peoples;
    string race;
    string character_class;
    string native_language;
    string element;
    string circle;
    string sex;
    string color_one;
    string color_two;
    string color_three;
    string color_four;
    int might;
    int toughness;
    int intellect;
    int perserverance;
    int dexterity;
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
        peoples = "Humanoid";
    }

    if ("Human" == race){
        might = 40;
        intellect = 30;
        perserverance = 35;
        dexterity = 40;
        toughness = 50; 
        charisma = 45;
        native_language = "Domain_Dependent";
    }
    else if ("Elf" == race){
         might = 30;
        intellect = 45;
        perserverance = 50;
        dexterity = 50;
        toughness = 40; 
        charisma = 35;
        native_language = "Romanian";
    }
     else if ("Dwarf" == race){
        might = 45;
        intellect = 40;
        perserverance = 40;
        dexterity = 30;
        toughness = 50; 
        charisma = 35;
        native_language = "Snow_Dependent";
    }
     else if ("Ogre" == race){
        might = 50;
        intellect = 35;
        perserverance = 40;
        dexterity = 40;
        toughness = 45; 
        charisma = 30;
    }
    else if ("Arachnian" == race){
        might = 40;
        intellect = 35;
        perserverance = 45;
        dexterity = 50;
        toughness = 40; 
        charisma = 30;
    }
     else if ("Salamandrine" == race){
        might = 45;
        intellect = 40;
        perserverance = 50;
        dexterity = 35;
        toughness = 30; 
        charisma = 40;
        native_language = "Spanish";
    }
     else if ("Raptorian" == race){
        might = 40;
        intellect = 40;
        perserverance = 45;
        dexterity = 50;
        toughness = 35; 
        charisma = 30;
        native_language = "English";
    }
     else if ("Lizard Man" == race){
        might = 40;
        intellect = 35;
        perserverance = 45;
        dexterity = 50;
        toughness = 40; 
        charisma = 30;
    }
     else if ("Atheztug" == race){
        might = 40;
        intellect = 50;
        perserverance = 45;
        dexterity = 40;
        toughness = 30; 
        charisma = 35;
        native_language = "Italian";
    }
     else if ("Daedron" == race){
        might = 50;
        intellect = 40;
        perserverance = 35;
        dexterity = 50;
        toughness = 40; 
        charisma = 30;
        native_language = "Italian";
    }
     else if ("Draconian" == race){
        might = 40;
        intellect = 45;
        perserverance = 35;
        dexterity = 50;
        toughness = 40; 
        charisma = 30;
        native_language = "Greek";
    }
     else{
        race = "Human";
        might = 40;
        intellect = 30;
        perserverance = 35;
        dexterity = 40;
        toughness = 50; 
        charisma = 35;
        native_language = "Domain_Dependent";
    }    
   

    cout << "What do you look like" << endl;
    if (race == "Atheztug") {
        cout << "Which Element are you?" << endl;
        cout << "" << endl;
        cout << "The power of the earth" << endl;
        cout << "The will of fire" << endl;
        cout << "The freedom of air" << endl;
        cout << "The elegance of water" << endl;
        cin >> element;
        if (element == "Earth"){
            might = (might + 5);
        }
        else if (element == "Fire"){
            perserverance = (perserverance + 5);
        }
        else if (element == "Air"){
            dexterity = (dexterity + 5);
        }
        else if (element == "Water"){

        }

    }
    else if (race == "Daedron") {
        cout << "Where in the Abyss do you hail from?" << endl;
        cout << "" << endl;
        cout << "The " << endl;
        cin >> circle;


    }
    else {
        cout << "What gender are you?" << endl;
        cin >> sex;
        if (race == "Draconian"){
            cout << "What Energy do you weild" << endl;
            cin >> element;
        }
    }

    cout << "I only possess the knowledge of your shape" << endl;
    if (race == "Human"|| race == "Elf"|| race == "Dwarf") {
        cin >> color_one;
        cin >> color_two;
        cin >> color_three;
        cin >> color_four;


    }
    else if (race == "Ogre"){
        cin >> color_one;
        cin >> color_two;
        cin >> color_three;
        cin >> color_four;
    }
    else if (race == "Arachnian"){
        cin >> color_one;
        cin >> color_two;
        cin  >> color_three;
        cin >> color_four;

    }
    else if (race == "Salamandrine"){
        cin >> color_one;
        cin >>color_two;
        

    }



}