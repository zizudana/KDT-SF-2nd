#include "Snack.h"

std::string Snack::getName() {
    return name;
}

void Snack::printInfo() {
    std::cout << name << " Snack입니다" << std::endl;
}

int Snack::num = 0;