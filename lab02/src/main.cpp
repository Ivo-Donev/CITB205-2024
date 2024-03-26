#include <iostream>
#include "../headers/asker.h"
#include "../headers/greeter.h"

int main() {
    Asker asker("What is your name?");
    asker.ask();
    Greeter greeter(asker);
    greeter.sayHello(); // ask for name and say hello
    greeter.sayHello(); // again -> ask for name and say hello
    return 0;
}