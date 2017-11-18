// Example program

#include <iostream>
#include <string>
#include "file.h"
#include "../inOut.h"

using namespace std;

string writeName(string name) {
    return "Hello:) " + name + "!";
}

string ask() {
    outToMonitor("What is your name?");
    string n = inFromKeyboard();
    return n;
}

void start(){
    // start of the logical part :)
    outToMonitor(writeName(ask()));
}
