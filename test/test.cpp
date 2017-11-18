#include <iostream>
#include <string>
#include "test.h"
#include "logic/file.h"
#include <vector>

using namespace std;

//bool testWriteName() {
//
//    outToMonitor(writeName(ask()));
//
//
//    string name = inFromKeyboard();
//    string s = writeName(name);
//    string all = string("Hello ") + name + "!";
//    return s == all;
//}

string text;
string out;

string simulateKeyboard() {
    return text;
}

void printedOnScreen(string s) {
    out = s;
}

bool TestAnia() {
    text = "Ania";
    start();
    return (out == "Hello " + text + "!");
}

bool TestEmpty() {
    text = "";
    start();
    return (out == "Hello " + text + "!");
}

bool TestBasiaItomek() {
    text = "Basia i Tomek";
    start();
    return (out == "Hello " + text + "!");
}

void test() {
    std::vector<string> vs;
    vs.push_back("TestAnia");
    vs.push_back("TestEmpty");
    vs.push_back("TestBasiaItomek");

    if (!TestAnia()) {
        cout << "TestAnia failed!" << endl;
    } else {
        cout << "TestAnia OK!" << endl;
    }
    if (!TestEmpty()) {
        cout << "TestEmpty failed!" << endl;
    } else {
        cout << "TestEmpty OK!" << endl;
    }
}
