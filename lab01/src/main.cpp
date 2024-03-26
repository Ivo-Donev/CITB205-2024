#include "../headers/greeter.h"
#include "../headers/asker.h"

int main() {
    Asker asker;
    Greeter greeter;
    greeter.sayHello(asker);
    return 0;
}