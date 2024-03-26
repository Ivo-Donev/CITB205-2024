#include "../headers/asker.h"

string Asker::ask()
{
    std::cout << question << std::endl;
    string answer;
    std::cin >> answer;
    return answer;
}