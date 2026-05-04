//belmorea
//5/13/26
//Final Project (C++ script)

#include <iostream>
using namespace std;

string language = "French";
string pLanguage = language;
string Name_spelt = "Croise";
string Name_pronounced = "Croise"; //this one is written using the Cyrillic alphabet, hex codes are provided in outputs before you pronounce your name
string pName_spelt = Name_spelt;
string pName_Pronounced = Name_pronounced;
string Race = "Human";
string pRace = Race;
string Class = "Warrior";
string pClass = Class;
int main(){
    cout << "Quel est votre langue, Croise?" <<endl;
    cout << "French(1), English(2), Spanish(3), German(4), Italian(5), Bulgarian(6), Russian(7), Polish(8), Czech(9),Romanian(10)," << endl;
    cin >> language;

    if (language == "French"|| language == "Francais" || language == "Francés" || language == "Französisch" || language == "Francese" || language == "френски" || language == "Французский" || language == "Francuski"){
        cout << "Bonjour, Croise" <<endl;
    }
    else if (language == "English" || language == "Anglais" || language == "Inglés" || language == "Englisch" || language == "Inglese" || language == "английски"){
        cout << "Hello, Crusader" <<endl;
    }
    else if (language == "Spanish" || language == "Espagnol" || language == "Español" || language == "Spanisch" || language == "Spagnolo" || language == "испански"){
        cout << "Hola, Cruzado" <<endl;
    }
    else if (language == "German" || language == "Allemand" || language == "Alemán" || language == "Deutsch" || language == "Tedesco" || language == "немски"){
        cout << "Hallo, Kreuzritter" <<endl;
    }
    else if (language == "Italian" || language == "Italien" || language == "Italiano" || language == "Italienisch" || language == "итальянский"){
        cout << "Ciao, Crociato" <<endl;
    }
    else if (language == "Bulgarian" || language == "Bulgare" || language == "Búlgaro" || language == "Bulgarisch" || language == "Bulgaro" || language == "български"){
        cout << "Здравей, Кръстоносец" <<endl;
    }
    else if (language == "Russian" || language == "Russe" || language == "Ruso" || language == "Russisch" || language == "Russo" || language == "русский"){
        cout << "Привет, Крестоносец" <<endl;
    }
    else if (language == "Polish" || language == "Polonais" || language == "Polaco" || language == "Polnisch" || language == "Polacco" || language == "польский"){
        cout << "Cześć, Krzyżowiec" <<endl;
    }
    else if (language == "Czech" || language == "Tchèque" || language == "Checo" || language == "Tschechisch" || language == "Ceco" || language == "чешский"){
        cout << "Ahoj, Křižák" <<endl;
    }
    else if (language == "Romanian" || language == "Roumain" || language == "Rumano" || language == "Rumänisch" || language == "Rumeno" || language == "румынский"){
        cout << "Salut, Cruciatul" <<endl;
    }
    else{
        cout << "Désolé, Croise, je ne comprends pas cette langue." <<endl;
    }

    if (language == "French"|| language == "Francais" || language == "Francés" || language == "Französisch" || language == "Francese" || language == "френски" || language == "Французский" || language == "Francuski"){
        cout << "Quel est votre nom, Croise?" <<endl;
        cin >> Name_spelt;
        cout << "Comment ton nom se prononcerait-il, Croisé ?" <<endl;
        cin >> Name_pronounced;
    }
    else if (language == "English" || language == "Anglais" || language == "Inglés" || language == "Englisch" || language == "Inglese" || language == "английски"){
        cout << "What is your name, Crusader?" <<endl;
        cin >> Name_spelt;
        cout << "How would you pronounce your name, Crusader?" <<endl;
        cin >> Name_pronounced;
    }
    else if (language == "Spanish" || language == "Espagnol" || language == "Español" || language == "Spanisch" || language == "Spagnolo" || language == "испански"){
        cout << "¿Cuál es tu nombre, Cruzado?" <<endl;
        cin >> Name_spelt;
        cout << "¿Cómo pronunciarías tu nombre, Cruzado?" <<endl;
        cin >> Name_pronounced;
    }
    else if (language == "German" || language == "Allemand" || language == "Alemán" || language == "Deutsch" || language == "Tedesco" || language == "немски"){
        cout << "Wie ist dein Name, Kreuzritter?" <<endl;
        cin >> Name_spelt;
        cout << "Wie würdest du deinen Namen aussprechen, Kreuzritter?" <<endl;
        cin >> Name_pronounced;
    }
    else if (language == "Italian" || language == "Italien" || language == "Italiano" || language == "Italienisch" || language == "итальянский"){
        cout << "Qual è il tuo nome, Crociato?" <<endl;
        cin >> Name_spelt;
        cout << "Come pronunceresti il tuo nome, Crociato?" <<endl;
        cin >> Name_pronounced;
    }
    else if (language == "Bulgarian" || language == "Bulgare" || language == "Búlgaro" || language == "Bulgarisch" || language == "Bulgaro" || language == "български"){
        cout << "Какво е твоето име, Кръстоносец?" <<endl;
        cin >> Name_spelt;
        cout << "Как бихте произнесли името си, Кръстоносец?" <<endl;
        cin >> Name_pronounced;
    }
    else if (language == "Russian" || language == "Russe" || language == "Ruso" || language == "Russisch" || language == "Russo" || language == "русский"){
        cout << "Как тебя зовут, Крестоносец?" <<endl;
        cin >> Name_spelt;
        cout << "Как бы вы произнесли свое имя, Крестоносец?" <<endl;
        cin >> Name_pronounced;
    }
    else if (language == "Polish" || language == "Polonais" || language == "Polaco" || language == "Polnisch" || language == "Polacco" || language == "польский"){
        cout << "Jak masz na imię, Krzyżowiec?" <<endl;
        cin >> Name_spelt;
        cout << "Jak byś wymówił swoje imię, Krzyżowiec?" <<endl;
        cin >> Name_pronounced;
    }
    else if (language == "Czech" || language == "Tchèque" || language == "Checo" || language == "Tschechisch" || language == "Ceco" || language == "чешский"){
        cout << "Jak se jmenuješ, Křižák?" <<endl;
        cin >> Name_spelt;
        cout << "Jak bys vyslovil své jméno, Křižák?" <<endl;
        cin >> Name_pronounced;
    }
    else if (language == "Romanian" || language == "Roumain" || language == "Rumano" || language == "Rumänisch" || language == "Rumeno" || language == "румынский"){
        cout << "Care este numele tău, Cruciatul?" <<endl;
        cin >> Name_spelt;
        cout << "Cum ai pronunța numele tău, Cruciatul?" <<endl;
        cin >> Name_pronounced;
    }
   

    cout << "Quel est votre nom, Croise?" <<endl;
    cin >> Name_spelt;
    cout << "Comment ton nom se prononcerait-il, Croisé ?" <<endl;
    cin >> Name_pronounced;
    cin >> Race;
    cin >> Class;

    return 0;
}