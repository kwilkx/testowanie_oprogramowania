#include <iostream>
#include <string>
#include "test.h"
#include "logic/file.h"
#include <vector>
#include <gtest/gtest.h>

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

TEST(Test,TestAnia) {
    text = "Ania";
    start();
    EXPECT_EQ(out, "Hello " + text + "!");
}

TEST(Test,TestEmpty) {
    text = "";
    start();
    EXPECT_TRUE(out == "Hello " + text + "!");
}

TEST(Test,TestBasiaItomek) {
    text = "Basia i Tomek";
    start();
    EXPECT_TRUE(out == "Hello " + text + "!");
}
