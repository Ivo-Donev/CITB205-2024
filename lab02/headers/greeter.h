#pragma once

#include "asker.h"

class Greeter {
public:
    Greeter(Asker asker);
    void sayHello();
private:
    Asker asker;
};

