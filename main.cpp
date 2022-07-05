#include <iostream>
#include "leaver.h"

int main() {
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    Leaver::leave(name);
}