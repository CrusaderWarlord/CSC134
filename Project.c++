//belmorea
//5/13/26
//Final Project (C++ script)

#include <iostream>
using namespace std;

string language = "French";
string pLanguage = language;
string Name_spelt = "Croisé"; //this one is written using the Latin alphabet, hex codes are provided in outputs before you pronounce your name
string Name_pronounced = "Croisé"; //this one is written using the Cyrillic alphabet, hex codes are provided in outputs before you pronounce your name
string pName_spelt = Name_spelt;
string pName_Pronounced = Name_pronounced;
string Race = "Human";
string pRace = Race;
string Class = "Warrior";
string pClass = Class;
int main(){
    cout << "Quel est votre langue, Croisé?" <<endl;
    cout << "Francais(1), English(2), Español(3), Deustch(4), Italiano(5), български(6), русский(7), Polski(8), Czech(9),Romanian(10)," << endl;
    cin >> language;

    if (language == "French"|| language == "Francais" || language == "Francés" || language == "Französisch" || language == "Francese" || language == "френски" || language == "Французский" || language == "Francuski"){
        cout << "Bonjour, Croisé" <<endl;
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
        cout << "Désolé, Croisé, je ne comprends pas cette langue." <<endl;
        language = "French";
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
   

    if (language == "French"|| language == "Francais" || language == "Francés" || language == "Französisch" || language == "Francese" || language == "френски" || language == "Французский" || language == "Francuski"){
        cout << "Quel est votre race, Croisé?" <<endl;
        cout << "Humains: Humain(1), Elfe(2), Nain(3), Ogre(4)" << endl;
        cout << "Bestiaux: Arachnien(5), Salamandrin(6), Homme Lézard(7), Raptorian(8)" <<endl;
        cout << "Inhabituels: Atheztug(9), Draconien(10), Daedron(11)" <<endl;
    }
    else if (language == "English" || language == "Anglais" || language == "Inglés" || language == "Englisch" || language == "Inglese" || language == "английски"){
        cout << "What is your race, Crusader?" <<endl;
        cout << "Humanoids: Human(1), Elf(2), Dwarf(3), Ogre(4)" << endl;
        cout << "Bestials: Arachnian(5), Salamandrine(6), Lizard Man(7), Raptorian(8)" <<endl;
        cout << "Unusuals: Atheztug(9), Draconian(10), Daedron(11)" <<endl;
    }
    else if (language == "Spanish" || language == "Espagnol" || language == "Español" || language == "Spanisch" || language == "Spagnolo" || language == "испански"){
        cout << "¿Cuál es tu raza, Cruzado?" <<endl;
        cout << "Humanoides: Humano(1), Elfo(2), Enano(3), Ogro(4)" << endl;
        cout << "Bestiales: Aracniano(5), Salamandrino(6), Hombre Lagarto(7), Raptorian(8)" <<endl;
        cout << "Inusuales: Atheztug(9), Draconiano(10), Daedron(11)" <<endl;
    }
    else if (language == "German" || language == "Allemand" || language == "Alemán" || language == "Deutsch" || language == "Tedesco" || language == "немски"){
        cout << "Was ist deine Rasse, Kreuzritter?" <<endl;
        cout << "Humanoide: Mensch(1), Elf(2), Zwerg(3), Oger(4)" << endl;
        cout << "Bestien: Arachnian(5), Salamandrin(6), Echsenmensch(7), Raptorian(8)" <<endl;
        cout << "Ungewöhnliche: Atheztug(9), Draconian(10), Daedron(11)" <<endl;
    }
    else if (language == "Italian" || language == "Italien" || language == "Italiano" || language == "Italienisch" || language == "итальянский"){
        cout << "Qual è la tua razza, Crociato?" <<endl;
        cout << "Umanoidi: Umano(1), Elfo(2), Nano(3), Orco(4)" << endl;
        cout << "Bestiali: Aracniano(5), Salamandrino(6), Uomo Lucertola(7), Raptorian(8)" <<endl;
        cout << "Inusuali: Atheztug(9), Draconiano(10), Daedron(11)" <<endl;
    }
    else if (language == "Bulgarian" || language == "Bulgare" || language == "Búlgaro" || language == "Bulgarisch" || language == "Bulgaro" || language == "български"){
        cout << "Каква е твоята раса, Кръстоносец?" <<endl;
        cout << "Хуманоиди: Човек(1), Елф(2), Джудже(3), Огър(4)" << endl;
        cout << "Зверове: Арахниан(5), Саламандрин(6), Човек-ящер(7), Рапториан(8)" <<endl;
        cout << "Необичайни: Atheztug(9), Draconian(10), Daedron(11)" <<endl;
    }
    else if (language == "Russian" || language == "Russe" || language == "Ruso" || language == "Russisch" || language == "Russo" || language == "русский"){
        cout << "Какая у тебя раса, Крестоносец?" <<endl;
        cout << "Гуманоиды: Человек(1), Эльф(2), Дварф(3), Ог(4)" << endl;
        cout << "Звери: Арахниан(5), Саламандрин(6), Человек-ящер(7), Рапториан(8)" <<endl;
        cout << "Необычные: Atheztug(9), Draconian(10), Daedron(11)" <<endl;
    }
    else if (language == "Polish" || language == "Polonais" || language == "Polaco" || language == "Polnisch" || language == "Polacco" || language == "польский"){
        cout << "Jaka jest twoja rasa, Krzyżowiec?" <<endl;
        cout << "Humanoidy: Człowiek(1), Elf(2), Krasnolud(3), Ogr(4)" << endl;
        cout << "Bestie: Arachnianka(5), Salamandryna(6), Człowiek-jaszczurka(7), Raptorian(8)" <<endl;
        cout << "Niezwykłe: Atheztug(9), Draconian(10), Daedron(11)" <<endl;
    }
    else if (language == "Czech" || language == "Tchèque" || language == "Checo" || language == "Tschechisch" || language == "Ceco" || language == "чешский"){
        cout << "Jaká je tvoje rasa, Křižák?" <<endl;
        cout << "Humanoidi: Člověk(1), Elf(2), Dwarf(3), Ogre(4)" << endl;
        cout << "Bestie: Arachnianka(5), Salamandryna(6), Člověk-jaszczurka(7), Raptorian(8)" <<endl;
        cout << "Neobvyklé: Atheztug(9), Draconian(10), Daedron(11)" <<endl;
    }
    else if (language == "Romanian" || language == "Roumain" || language == "Rumano" || language == "Rumänisch" || language == "Rumeno" || language == "румынский"){
        cout << "Care este rasa ta, Cruciatul?" <<endl;
        cout << "Humanoizi: Om(1), Elf(2), Pitic(3), Ogr(4)" << endl;
        cout << "Bestii: Arachnian(5), Salamandrin(6), Om-Șopârlă(7), Raptorian(8)" <<endl;
        cout << "Neobișnuite: Atheztug(9), Draconian(10), Daedron(11)" <<endl;
    }     
    cin >> Race;

    if (language == "French"|| language == "Francais" || language == "Francés" || language == "Französisch" || language == "Francese" || language == "френски" || language == "Французский" || language == "Francuski"){
        cout << "Quelle classe es-tu, Croisé?" <<endl;
        cout << "Guerriers: Guerrier(1), Ranger(2), Barbare(3), Moine(4)" << endl;
        cout << "Lanceurs de sorts: Mage(1), Sorcier(2), Soigneur(3), Warlock(4)" <<endl;
        cout << "Voleurs: Rogue(1), Assassin(2), Barde(3), Voleur(4)" <<endl;
    }
    else if (language == "English" || language == "Anglais" || language == "Inglés" || language == "Englisch" || language == "Inglese" || language == "английски"){
        cout << "What class are you, Crusader?" <<endl;
        cout << "Fighters: Warrior(1), Ranger(2), Barbarian(3), Monk(4)" << endl;
        cout << "Spellcasters: Mage(1), Sorcerer(2), Healer(3), Warlock(4)" <<endl;
        cout << "Thieves: Rogue(1), Assassin(2), Bard(3), Thief(4)" <<endl;
    }
    else if (language == "Spanish" || language == "Espagnol" || language == "Español" || language == "Spanisch" || language == "Spagnolo" || language == "испански"){
        cout << "¿Qué clase eres, Cruzado?" <<endl;
        cout << "Luchadores: Guerrero(1), Guardabosques(2), Bárbaro(3), Monje(4)" << endl;
        cout << "Hechiceros: Mago(1), Hechicero(2), Sanador(3), Brujo(4)" <<endl;
        cout << "Ladrones: Pícaro(1), Asesino(2), Bardo(3), Ladrón(4)" <<endl;
    }
    else if (language == "German" || language == "Allemand" || language == "Alemán" || language == "Deutsch" || language == "Tedesco" || language == "немски"){
        cout << "Welche Klasse bist du, Kreuzritter?" <<endl;
        cout << "Kämpfer: Krieger(1), Waldläufer(2), Barbar(3), Mönch(4)" << endl;
        cout << "Zauberer: Magier(1), Zauberer(2), Heiler(3), Hexenmeister(4)" <<endl;
        cout << "Diebe: Schurke(1), Assassine(2), Barde(3), Dieb(4)" <<endl;
    }
    else if (language == "Italian" || language == "Italien" || language == "Italiano" || language == "Italienisch" || language == "итальянский"){
        cout << "Quale classe sei, Crociato?" <<endl;
        cout << "Combattenti: Guerriero(1), Ranger(2), Barbaro(3), Monaco(4)" << endl;
        cout << "Incantatori: Mago(1), Stregone(2), Guaritore(3), Warlock(4)" <<endl;
        cout << "Ladri: Rogue(1), Assassino(2), Bardo(3), Ladro(4)" <<endl;
    }
    else if (language == "Bulgarian" || language == "Bulgare" || language == "Búlgaro" || language == "Bulgarisch" || language == "Bulgaro" || language == "български"){
        cout << "Какъв клас си, Кръстоносец?" <<endl;
        cout << "Бойци: Воин(1), Рейнджър(2), Варварин(3), Монах(4)" << endl;
        cout << "Заклинатели: Магьосник(1), Чародей(2), Лекар(3), Warlock(4)" <<endl;
        cout << "Крадци: Rogue(1), Assassin(2), Barde(3), Thief(4)" <<endl;
    }
    else if (language == "Russian" || language == "Russe" || language == "Ruso" || language == "Russisch" || language == "Russo" || language == "русский"){
        cout << "Какой ты класс, Крестоносец?" <<endl;
        cout << "Бойцы: Воин(1), Рейнджер(2), Варварин(3), Монах(4)" << endl;
        cout << "Заклинатели: Маг(1), Чарodей(2), Целитель(3), Warlock(4)" <<endl;
        cout << "Воры: Rogue(1), Assassin(2), Barde(3), Thief(4)" <<endl;
    }
    else if (language == "Polish" || language == "Polonais" || language == "Polaco" || language == "Polnisch" || language == "Polacco" || language == "польский"){
        cout << "Jaką klasą jesteś, Krzyżowiec?" <<endl;
        cout << "Wojownicy: Wojownik(1), Strażnik(2), Barbarzyńca(3), Mnich(4)" << endl;
        cout << "Czarodzieje: Mag(1), Czarodziej(2), Uzdrowiciel(3), Warlock(4)" <<endl;
        cout << "Złodzieje: Rogue(1), Assassin(2), Barde(3), Thief(4)" <<endl;
    }
    else if (language == "Czech" || language == "Tchèque" || language == "Checo" || language == "Tschechisch" || language == "Ceco" || language == "чешский"){
        cout << "Jakou třídou jsi, Křižák?" <<endl;
        cout << "Bojovníci: Voják(1), Strážce(2), Barbar(3), Mních(4)" << endl;
        cout << "Kouzelnici: Mag(1), Čaroděj(2), Léčitel(3), Warlock(4)" <<endl;
        cout << "Zloději: Rogue(1), Assassin(2), Barde(3), Thief(4)" <<endl;
    }
    else if (language == "Romanian" || language == "Roumain" || language == "Rumano" || language == "Rumänisch" || language == "Rumeno" || language == "румынский"){
        cout << "Ce clasă ești, Cruciatul?" <<endl;
        cout << "Luptători: Războinic(1), Ranger(2), Barbar(3), Călugăr(4)" << endl;
        cout << "Vrăjitori: Mag(1), Vrăjitor(2), Vindecător(3), Warlock(4)" <<endl;
        cout << "Furți: Rogue(1), Assassin(2), Barde(3), Thief(4)" <<endl;
    }

    cout << "Quelle classe es-tu, Croisé?" <<endl;
    cout << "Fighters: Warrior(1), Ranger(2), Barbarian(3), Monk(4)" << endl;
    cout << "Spellcasters: Mage(1), Sorcerer(2), Healer(3), Warlock(4)" <<endl;
    cout << "Thieves: Rogue(1), Assassin(2), Bard(3), Thief(4)" <<endl;
    cin >> Class;

    return 0;
}