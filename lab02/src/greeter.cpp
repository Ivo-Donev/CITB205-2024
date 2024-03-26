#include <iostream>
#include <string>

#include "../headers/greeter.h"

Greeter::Greeter(Asker a) : asker(a) {}

void Greeter::sayHello()
{
    string name = asker.ask();
    std::cout << "Greetings, " << name << "!" << std::endl;
}