#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat& other) {
    *this = other;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operator" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}   