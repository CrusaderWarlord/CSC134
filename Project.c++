#include <iostream>
#include <algorithm>
#include <cctype>
#include <limits>
#include <map>
#include <string>
#include <vector>

using namespace std;

string trim(string s) {
    while (!s.empty() && isspace((unsigned char)s.front())) {
        s.erase(s.begin());
    }
    while (!s.empty() && isspace((unsigned char)s.back())) {
        s.pop_back();
    }
    return s;
}

string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return static_cast<char>(tolower(c));
    });
    return s;
}

string normalizeLanguage(const string &input) {
    string value = toLower(trim(input));

    if (value == "1" || value == "french" || value == "francais" || value == "francés" || value == "frances" || value == "französisch" || value == "francese" || value == "френски" || value == "французский" || value == "francuski")
        return "French";
    if (value == "2" || value == "english" || value == "anglais" || value == "inglés" || value == "englisch" || value == "inglese" || value == "английски")
        return "English";
    if (value == "3" || value == "spanish" || value == "espagnol" || value == "español" || value == "spanisch" || value == "spagnolo" || value == "испански")
        return "Spanish";
    if (value == "4" || value == "german" || value == "allemand" || value == "alemán" || value == "deustch" || value == "deutsch" || value == "tedesco" || value == "немски")
        return "German";
    if (value == "5" || value == "italian" || value == "italien" || value == "italiano" || value == "italienisch" || value == "итальянский")
        return "Italian";
    if (value == "6" || value == "bulgarian" || value == "bulgare" || value == "búlgaro" || value == "bulgarisch" || value == "български")
        return "Bulgarian";
    if (value == "7" || value == "russian" || value == "russe" || value == "ruso" || value == "russisch" || value == "russo" || value == "русский")
        return "Russian";
    if (value == "8" || value == "polish" || value == "polonais" || value == "polaco" || value == "polnisch" || value == "polacco" || value == "польский")
        return "Polish";
    if (value == "9" || value == "czech" || value == "tchèque" || value == "checo" || value == "tschechisch" || value == "ceco" || value == "чешский")
        return "Czech";
    if (value == "10" || value == "romanian" || value == "roumain" || value == "rumano" || value == "rumänisch" || value == "rumeno" || value == "румынский")
        return "Romanian";
    if (value == "11" || value == "dutch" || value == "néerlandais" || value == "neerlandés" || value == "niederländisch" || value == "olandese" || value == "нидерландски")
        return "Dutch";

    return "";
}

struct LanguageText {
    string greeting;
    string askName;
    string askPronounce;
    string askRace;
    string raceOptions;
    string askClass;
    string classOptions;
    string sheetTitle;
    string labelName;
    string labelPronounced;
    string labelRace;
    string labelClass;
    string labelMight;
    string labelToughness;
    string labelIntellect;
    string labelPerseverance;
    string labelDexterity;
    string labelCharisma;
    vector<string> raceNames;
    vector<string> classNames;
};

int main() {
    map<string, LanguageText> languageTexts = {
        {
            "French",
            {
                "Bonjour, Croisé",
                "Quel est votre nom, Croisé?",
                "Comment ton nom se prononcerait-il, Croisé?",
                "Quelle est votre race, Croisé?",
                "Humains: Humain(1), Elfe(2), Nain(3), Ogre(4)\nBestiaux: Arachnien(5), Salamandrin(6), Homme Lézard(7), Raptorian(8)\nInhabituels: Pseudodeus(9), Draconien(10), Daedron(11)",
                "Quelle classe es-tu, Croisé?",
                "Guerriers: Guerrier(1), Ranger(2), Barbare(3), Moine(4)\nLanceurs de sorts: Mage(1), Sorcier(2), Soigneur(3), Warlock(4)\nVoleurs: Rogue(1), Assassin(2), Barde(3), Voleur(4)",
                "Fiche de Personnage",
                "Nom",
                "prononcé",
                "Race",
                "Classe",
                "Puissance",
                "Endurance",
                "Intellect",
                "Persévérance",
                "Dextérité",
                "Charisme",
                {"Humain", "Elfe", "Nain", "Ogre", "Arachnien", "Salamandrin", "Homme Lézard", "Raptorian", "Pseudodeus", "Draconien", "Daedron"},
                {"Guerrier", "Ranger", "Barbare", "Moine", "Mage", "Sorcier", "Soigneur", "Warlock", "Rogue", "Assassin", "Barde", "Voleur"}
            }
        },
        {
            "English",
            {
                "Hello, Crusader",
                "What is your name, Crusader?",
                "How would you pronounce your name, Crusader?",
                "What is your race, Crusader?",
                "Humanoids: Human(1), Elf(2), Dwarf(3), Ogre(4)\nBestials: Arachnian(5), Salamandrine(6), Lizard Man(7), Raptorian(8)\nUnusuals: Atheztug(9), Draconian(10), Daedron(11)",
                "What class are you, Crusader?",
                "Fighters: Warrior(1), Ranger(2), Barbarian(3), Monk(4)\nSpellcasters: Mage(1), Sorcerer(2), Healer(3), Warlock(4)\nThieves: Rogue(1), Assassin(2), Bard(3), Thief(4)",
                "Character Sheet",
                "Name",
                "pronounced",
                "Race",
                "Class",
                "Might",
                "Toughness",
                "Intellect",
                "Perseverance",
                "Dexterity",
                "Charisma",
                {"Human", "Elf", "Dwarf", "Ogre", "Arachnian", "Salamandrine", "Lizard Man", "Raptorian", "Atheztug", "Draconian", "Daedron"},
                {"Warrior", "Ranger", "Barbarian", "Monk", "Mage", "Sorcerer", "Healer", "Warlock", "Rogue", "Assassin", "Bard", "Thief"}
            }
        },
        {
            "Spanish",
            {
                "Hola, Cruzado",
                "¿Cuál es tu nombre, Cruzado?",
                "¿Cómo pronunciarías tu nombre, Cruzado?",
                "¿Cuál es tu raza, Cruzado?",
                "Humanoides: Humano(1), Elfo(2), Enano(3), Ogro(4)\nBestiales: Aracniano(5), Salamandrino(6), Hombre Lagarto(7), Raptorian(8)\nInusuales: Pseudodeus(9), Draconiano(10), Daedron(11)",
                "¿Qué clase eres, Cruzado?",
                "Luchadores: Guerrero(1), Guardabosques(2), Bárbaro(3), Monje(4)\nHechiceros: Mago(1), Hechicero(2), Sanador(3), Brujo(4)\nLadrones: Pícaro(1), Asesino(2), Bardo(3), Ladrón(4)",
                "Hoja de Personaje",
                "Nombre",
                "pronunciado",
                "Raza",
                "Clase",
                "Fuerza",
                "Resistencia",
                "Intelecto",
                "Perseverancia",
                "Destreza",
                "Carisma",
                {"Humano", "Elfo", "Enano", "Ogro", "Aracniano", "Salamandrino", "Hombre Lagarto", "Raptorian", "Pseudodeus", "Draconiano", "Daedron"},
                {"Guerrero", "Guardabosques", "Bárbaro", "Monje", "Mago", "Hechicero", "Sanador", "Brujo", "Pícaro", "Asesino", "Bardo", "Ladrón"}
            }
        },
        {
            "German",
            {
                "Hallo, Kreuzritter",
                "Was ist dein Name, Kreuzritter?",
                "Wie würdest du deinen Namen aussprechen, Kreuzritter?",
                "Was ist deine Rasse, Kreuzritter?",
                "Humanoide: Mensch(1), Elf(2), Zwerg(3), Oger(4)\nBestien: Arachnian(5), Salamandrin(6), Echsenmensch(7), Raptorian(8)\nUngewöhnliche: Atheztug(9), Draconian(10), Daedron(11)",
                "Welche Klasse bist du, Kreuzritter?",
                "Kämpfer: Krieger(1), Waldläufer(2), Barbar(3), Mönch(4)\nZauberer: Magier(1), Zauberer(2), Heiler(3), Hexenmeister(4)\nDiebe: Schurke(1), Assassine(2), Barde(3), Dieb(4)",
                "Charakterbogen",
                "Name",
                "ausgesprochen",
                "Rasse",
                "Klasse",
                "Stärke",
                "Zähigkeit",
                "Intellekt",
                "Ausdauer",
                "Geschicklichkeit",
                "Charisma",
                {"Mensch", "Elf", "Zwerg", "Oger", "Arachnian", "Salamandrin", "Echsenmensch", "Raptorian", "Atheztug", "Draconian", "Daedron"},
                {"Krieger", "Waldläufer", "Barbar", "Mönch", "Magier", "Zauberer", "Heiler", "Hexenmeister", "Schurke", "Assassine", "Barde", "Dieb"}
            }
        },
        {
            "Italian",
            {
                "Ciao, Crociato",
                "Qual è il tuo nome, Crociato?",
                "Come pronunceresti il tuo nome, Crociato?",
                "Qual è la tua razza, Crociato?",
                "Umanoidi: Umano(1), Elfo(2), Nano(3), Orco(4)\nBestiali: Aracniano(5), Salamandrino(6), Uomo Lucertola(7), Raptorian(8)\nInusuali: Pseudodeus(9), Draconiano(10), Daedron(11)",
                "Quale classe sei, Crociato?",
                "Combattenti: Guerriero(1), Ranger(2), Barbaro(3), Monaco(4)\nIncantatori: Mago(1), Stregone(2), Guaritore(3), Warlock(4)\nLadri: Rogue(1), Assassino(2), Bardo(3), Ladro(4)",
                "Scheda del Personaggio",
                "Nome",
                "pronunciato",
                "Razza",
                "Classe",
                "Potenza",
                "Resistenza",
                "Intelletto",
                "Perseveranza",
                "Destrezza",
                "Carisma",
                {"Umano", "Elfo", "Nano", "Orco", "Aracniano", "Salamandrino", "Uomo Lucertola", "Raptorian", "Pseudodeus", "Draconiano", "Daedron"},
                {"Guerriero", "Ranger", "Barbaro", "Monaco", "Mago", "Stregone", "Guaritore", "Warlock", "Rogue", "Assassino", "Bardo", "Ladro"}
            }
        },
        {
            "Bulgarian",
            {
                "Здравей, Кръстоносец",
                "Какво е твоето име, Кръстоносец?",
                "Как бихте произнесли името си, Кръстоносец?",
                "Каква е твоята раса, Кръстоносец?",
                "Хуманоиди: Човек(1), Елф(2), Джудже(3), Огър(4)\nЗверове: Арахниан(5), Саламандрин(6), Човек-ящер(7), Рапториан(8)\nНеобичайни: Atheztug(9), Draconian(10), Daedron(11)",
                "Какъв клас си, Кръстоносец?",
                "Бойци: Воин(1), Рейнджър(2), Варварин(3), Монах(4)\nЗаклинатели: Магьосник(1), Чародей(2), Лекар(3), Чернокнижник(4)\nКрадци: Разбойник(1), Убиец(2), Бард(3), Крадец(4)",
                "Лист на героя",
                "Име",
                "произнесено",
                "Раса",
                "Клас",
                "Сила",
                "Издръжливост",
                "Интелект",
                "Постоянство",
                "Сръчност",
                "Харизма",
                {"Човек", "Елф", "Джудже", "Огър", "Арахниан", "Саламандрин", "Човек-ящер", "Рапториан", "Atheztug", "Draconian", "Daedron"},
                {"Воин", "Рейнджър", "Варварин", "Монах", "Магьосник", "Чародей", "Лекар", "Чернокнижник", "Разбойник", "Убиец", "Бард", "Крадец"}
            }
        },
        {
            "Russian",
            {
                "Привет, Крестоносец",
                "Как тебя зовут, Крестоносец?",
                "Как бы вы произнесли свое имя, Крестоносец?",
                "Какая у тебя раса, Крестоносец?",
                "Гуманоиды: Человек(1), Эльф(2), Дварф(3), Ог(4)\nЗвери: Арахниан(5), Саламандрин(6), Человек-ящер(7), Рапториан(8)\nНеобычные: Atheztug(9), Draconian(10), Daedron(11)",
                "Какой ты класс, Крестоносец?",
                "Бойцы: Воин(1), Рейнджер(2), Варварин(3), Монах(4)\nЗаклинатели: Маг(1), Чародей(2), Целитель(3), Колдун(4)\nВоры: Плут(1), Убийца(2), Бард(3), Вор(4)",
                "Лист Персонажа",
                "Имя",
                "произносится",
                "Раса",
                "Класс",
                "Сила",
                "Стойкость",
                "Интеллект",
                "Упорство",
                "Ловкость",
                "Харизма",
                {"Человек", "Эльф", "Дварф", "Ог", "Арахниан", "Саламандрин", "Человек-ящер", "Рапториан", "Atheztug", "Draconian", "Daedron"},
                {"Воин", "Рейнджер", "Варварин", "Монах", "Маг", "Чародей", "Целитель", "Колдун", "Плут", "Убийца", "Бард", "Вор"}
            }
        },
        {
            "Polish",
            {
                "Cześć, Krzyżowiec",
                "Jak masz na imię, Krzyżowiec?",
                "Jak byś wymówił swoje imię, Krzyżowiec?",
                "Jaka jest twoja rasa, Krzyżowiec?",
                "Humanoidy: Człowiek(1), Elf(2), Krasnolud(3), Ogr(4)\nBestie: Arachnianka(5), Salamandryna(6), Człowiek-jaszczurka(7), Raptorian(8)\nNiezwykłe: Atheztug(9), Draconian(10), Daedron(11)",
                "Jaką klasą jesteś, Krzyżowiec?",
                "Wojownicy: Wojownik(1), Strażnik(2), Barbarzyńca(3), Mnich(4)\nCzarodzieje: Mag(1), Czarodziej(2), Uzdrowiciel(3), Czarnoksiężnik(4)\nZłodzieje: Łotrzyk(1), Zabójca(2), Bard(3), Złodziej(4)",
                "Karta Postaci",
                "Imię",
                "wymawiane",
                "Rasa",
                "Klasa",
                "Siła",
                "Wytrzymałość",
                "Intelekt",
                "Wytrwałość",
                "Zręczność",
                "Charyzma",
                {"Człowiek", "Elf", "Krasnolud", "Ogr", "Arachnianka", "Salamandryna", "Człowiek-jaszczurka", "Raptorian", "Atheztug", "Draconian", "Daedron"},
                {"Wojownik", "Strażnik", "Barbarzyńca", "Mnich", "Mag", "Czarodziej", "Uzdrowiciel", "Czarnoksiężnik", "Łotrzyk", "Zabójca", "Bard", "Złodziej"}
            }
        },
        {
            "Czech",
            {
                "Ahoj, Křižák",
                "Jak se jmenuješ, Křižák?",
                "Jak bys vyslovil své jméno, Křižák?",
                "Jaká je tvoje rasa, Křižák?",
                "Humanoidi: Člověk(1), Elf(2), Dwarf(3), Ogre(4)\nBestie: Arachnianka(5), Salamandryna(6), Člověk-jaszczurka(7), Raptorian(8)\nNeobvyklé: Atheztug(9), Draconian(10), Daedron(11)",
                "Jakou třídou jsi, Křižák?",
                "Bojovníci: Voják(1), Strážce(2), Barbar(3), Mních(4)\nKouzelnici: Mag(1), Čaroděj(2), Léčitel(3), Černokněžník(4)\nZloději: Tulák(1), Vrah(2), Bard(3), Zloděj(4)",
                "List Postavy",
                "Jméno",
                "vyslovuje se",
                "Rasa",
                "Třída",
                "Síla",
                "Odolnost",
                "Intelekt",
                "Vytrvalost",
                "Obratnost",
                "Charisma",
                {"Člověk", "Elf", "Dwarf", "Ogre", "Arachnianka", "Salamandryna", "Člověk-jaszczurka", "Raptorian", "Atheztug", "Draconian", "Daedron"},
                {"Voják", "Strážce", "Barbar", "Mních", "Mag", "Čaroděj", "Léčitel", "Černokněžník", "Tulák", "Vrah", "Bard", "Zloděj"}
            }
        },
        {
            "Romanian",
            {
                "Salut, Cruciatul",
                "Care este numele tău, Cruciatul?",
                "Cum ai pronunța numele tău, Cruciatul?",
                "Care este rasa ta, Cruciatul?",
                "Humanoizi: Om(1), Elf(2), Pitic(3), Ogr(4)\nBestii: Arachnian(5), Salamandrin(6), Om-Șopârlă(7), Raptorian(8)\nNeobișnuite: Pseudodeus(9), Draconian(10), Daedron(11)",
                "Ce clasă ești, Cruciatul?",
                "Luptători: Războinic(1), Ranger(2), Barbar(3), Călugăr(4)\nVrăjitori: Mag(1), Vrăjitor(2), Vindecător(3), Vrăjitor Negru(4)\nHoți: Lotru(1), Asasin(2), Bard(3), Hoț(4)",
                "Fișa Personajului",
                "Nume",
                "pronunțat",
                "Rasă",
                "Clasă",
                "Putere",
                "Rezistență",
                "Intelect",
                "Perseverență",
                "Dexteritate",
                "Carismă",
                {"Om", "Elf", "Pitic", "Ogr", "Arachnian", "Salamandrin", "Om-Șopârlă", "Raptorian", "Pseudodeus", "Draconian", "Daedron"},
                {"Războinic", "Ranger", "Barbar", "Călugăr", "Mag", "Vrăjitor", "Vindecător", "Vrăjitor Negru", "Lotru", "Asasin", "Bard", "Hoț"}
            }
        },
        {
            "Dutch",
            {
                "Hallo, Kruisvaarder",
                "Wat is jouw naam, Kruisvaarder?",
                "Hoe zou je jouw naam uitspreken, Kruisvaarder?",
                "Wat is jouw ras, Kruisvaarder?",
                "Humanoïden: Mens(1), Elf(2), Dwerg(3), Oger(4)\nBeestachtig: Arachnian(5), Salamandrin(6), Hagedismens(7), Raptorian(8)\nOngebruikelijk: Atheztug(9), Draconian(10), Daedron(11)",
                "Welke klasse ben je, Kruisvaarder?",
                "Krijgers: Krijger(1), Ranger(2), Barbaar(3), Monnik(4)\nTovenaars: Magiër(1), Tovenaar(2), Genezer(3), Warlock(4)\nDiefen: Rogue(1), Assassin(2), Barde(3), Dief(4)",
                "Personageblad",
                "Naam",
                "uitgesproken",
                "Ras",
                "Klasse",
                "Kracht",
                "Taaiheid",
                "Intellect",
                "Doorzettingsvermogen",
                "Behendigheid",
                "Charisma",
                {"Mens", "Elf", "Dwerg", "Oger", "Arachnian", "Salamandrin", "Hagedismens", "Raptorian", "Atheztug", "Draconian", "Daedron"},
                {"Krijger", "Ranger", "Barbaar", "Monnik", "Magiër", "Tovenaar", "Genezer", "Warlock", "Rogue", "Assassin", "Barde", "Dief"}
            }
        }
    };

    cout << "Quel est votre langue, Croisé?" << endl;
    cout << "French(1), English(2), Spanish(3), German(4), Italian(5), Bulgarian(6), Russian(7), Polish(8), Czech(9), Romanian(10), Dutch(11)" << endl;

    string input;
    getline(cin, input);
    string language = normalizeLanguage(input);

    if (language.empty()) {
        cout << "Désolé, Croisé, je ne comprends pas cette langue." << endl;
        language = "French";
    }

    const LanguageText &text = languageTexts.at(language);

    string Name_spelt;
    string Name_pronounced;
    string Race;
    string Class;
    int might;
    int toughness;
    int intellect;
    int perserverance;
    int dexterity;
    int charisma;

    cout << text.greeting << endl;
    cout << text.askName << endl;
    getline(cin, Name_spelt);
    cout << text.askPronounce << endl;
    getline(cin, Name_pronounced);

    cout << text.askRace << endl;
    cout << text.raceOptions << endl;
    getline(cin, Race);

    if (Race == "1") {
        // Human
        might = 40;
        toughness = 50;
        intellect = 30;
        perserverance = 5;
        dexterity = 40;
        charisma = 45;
    } else if (Race == "2") {
        // Elf
        might = 30;
        toughness = 40;
        intellect = 50;
        perserverance = 10;
        dexterity = 60;
        charisma = 45;
    } else if (Race == "3") {
        // Dwarf
        might = 60;
        toughness = 70;
        intellect = 40;
        perserverance = 15;
        dexterity = 30;
        charisma = 40;
    } else if (Race == "4") {
        // Ogre
        might = 50;
        toughness = 45;
        intellect = 35;
        perserverance = 40;
        dexterity = 40;
        charisma = 30;
    } else if (Race == "5") {
        // Arachnian
        might = 40;
        toughness = 40;
        intellect = 35;
        perserverance = 45;
        dexterity = 50;
        charisma = 30;
    } else if (Race == "6") {
        // Salamandrine
        might = 35;
        toughness = 30;
        intellect = 35;
        perserverance = 50;
        dexterity = 40;
        charisma = 40;
    } else if (Race == "7") {
        // Lizard Man
        might = 40;
        toughness = 40;
        intellect = 30;
        perserverance = 45;
        dexterity = 50;
        charisma = 35;
    } else if (Race == "8") {
        // Raptorian
        might = 40;
        toughness = 45;
        intellect = 35;
        perserverance = 40;
        dexterity = 50;
        charisma = 30;
    } else if (Race == "9") {
        // Atheztug
        might = 40;
        toughness = 40;
        intellect = 50;
        perserverance = 35;
        dexterity = 50;
        charisma = 30;
    } else if (Race == "10") {
        // Draconian
        might = 40;
        toughness = 50;
        intellect = 30;
        perserverance = 35;
        dexterity = 40;
        charisma = 35;
    } else if (Race == "11") {
        // Daedron
        might = 50;
        toughness = 40;
        intellect = 40;
        perserverance = 35;
        dexterity = 50;
        charisma = 30;
    } else {
        might = toughness = intellect = perserverance = dexterity = charisma = 0;
    }

    cout << text.askClass << endl;
    cout << text.classOptions << endl;
    getline(cin, Class);

    if (Class == "1") {
        // Warrior
        might += 10;
        toughness += 5;
    } else if (Class == "2") {
        // Ranger
        dexterity += 10;
        intellect += 5;
    } else if (Class == "3") {
        // Barbarian
        might += 10;
        dexterity += 5;
        charisma -= 5;
    } else if (Class == "4") {
        // Monk
        dexterity += 10;
        might += 5;
    } else if (Class == "5") {
        // Mage
        intellect += 10;
        charisma += 5;
    } else if (Class == "6") {
        // Sorcerer
        perserverance += 10;
        intellect += 5;
    } else if (Class == "7") {
        // Healer
        intellect += 10;
        perserverance += 5;
    } else if (Class == "8") {
        // Warlock
        intellect += 10;
        charisma += 15;
    } else if (Class == "9") {
        // Rogue
        dexterity += 15;
        charisma += 5;
    } else if (Class == "10") {
        // Assassin
        dexterity += 20;
        charisma -= 5;
    } else if (Class == "11") {
        // Bard
        charisma += 20;
    } else if (Class == "12") {
        // Thief
        dexterity += 15;
    }

    size_t raceIdx = static_cast<size_t>(-1);
    try { raceIdx = static_cast<size_t>(stoi(Race)) - 1; } catch (...) {}
    string raceDisplay = (raceIdx < text.raceNames.size()) ? text.raceNames[raceIdx] : "?";

    size_t classIdx = static_cast<size_t>(-1);
    try { classIdx = static_cast<size_t>(stoi(Class)) - 1; } catch (...) {}
    string classDisplay = (classIdx < text.classNames.size()) ? text.classNames[classIdx] : "?";

    cout << "\n--- " << text.sheetTitle << " ---" << endl;
    cout << text.labelName << ": " << Name_spelt << " (" << text.labelPronounced << ": " << Name_pronounced << ")" << endl;
    cout << text.labelRace << ": " << raceDisplay << endl;
    cout << text.labelClass << ": " << classDisplay << endl;
    cout << text.labelMight << ": " << might << endl;
    cout << text.labelToughness << ": " << toughness << endl;
    cout << text.labelIntellect << ": " << intellect << endl;
    cout << text.labelPerseverance << ": " << perserverance << endl;
    cout << text.labelDexterity << ": " << dexterity << endl;
    cout << text.labelCharisma << ": " << charisma << endl;

    return 0;
}
