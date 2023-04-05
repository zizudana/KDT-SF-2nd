#include "Candy.h"

Candy::Candy() : Snack::Snack() {
    this->name = "사탕";
    Snack::num++;
}

void Candy::setTaste(std::string taste) {
    this->taste = taste;
}

void Candy::printInfo() {
    std::cout << taste << "맛 " << this->name << std::endl;
}
