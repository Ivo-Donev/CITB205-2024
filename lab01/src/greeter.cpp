#include <iostream>
#include <string>

#include "../headers/greeter.h"

void Greeter::sayHello(Asker asker)
{
    string name = asker.ask("What is thy name?");
    std::cout << "Greetings, " << name << "!" << std::endl;
}