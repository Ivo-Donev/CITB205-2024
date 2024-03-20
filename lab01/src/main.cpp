#include "greeter.h"
#include "asker.h"

int main() {
    Asker asker;
    Greeter greeter;
    greeter.sayHello(asker);
    return 0;
}