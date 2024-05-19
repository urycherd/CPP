#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap:: ScavTrap(const ScavTrap& other) {
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints > 0) {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints -= 8;
    } else {
        std::cout << "ScavTrap " << name << " has no energy left to attack" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}