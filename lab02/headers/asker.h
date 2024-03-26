#pragma once

#include <iostream>
#include <string>

using std::string;

class Asker {
public:
    Asker(string question) : question(question) {}
    string ask();
private:
    string question;
};