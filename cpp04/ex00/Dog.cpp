#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog& other) {
    *this = other;
    std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operator" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}   