//
//belmorea
// 4/29/26
//


#include <iostream>
using namespace std;

void setname(string &name)

int main() {

    string name = "Bob";
    string *pName = &name;

    setName(name);

    cout << "name  =" << name << endl;
    cout << "pName =" << pName << endl;
    cout << "*pName=" << *pName << endl;


        return 0;
}

void setName(string &name) {
    
    cout << "What's your name?" << endl;
    cin >> name;
}