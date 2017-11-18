#include <iostream>
#include <string>
#include "inOut.h"
#include "test.h"

using namespace std;

string inFromKeyboard() {
    return simulateKeyboard();
}

void outToMonitor(string s) {
    cout << s << endl;
    printedOnScreen(s);
}
