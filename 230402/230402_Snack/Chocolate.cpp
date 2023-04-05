#include "Chocolate.h"

Chocolate::Chocolate() : Snack::Snack() {
    this->name = "초콜릿";
    Snack::num++;
}
void Chocolate::setShape(std::string shape) {
    this->shape = shape;
}
void Chocolate::printInfo() {
    std::cout << shape << " " << this->name << "입니다." << std::endl;
}

