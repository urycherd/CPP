#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default") {
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

FragTrap::FragTrap(const FragTrap& other) {
    *this = other;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap requests a high five!" << std::endl;
}