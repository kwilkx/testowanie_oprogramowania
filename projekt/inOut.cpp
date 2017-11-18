#include <iostream>
#include <string>
#include "inOut.h"

using namespace std;

string inFromKeyboard() {
    string name;
    cin >> name;
    return name;
}

void outToMonitor(string s) {
    cout << s << endl;
}
