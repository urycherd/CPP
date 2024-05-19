#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("ClapTrapDefaultName"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " has no energy left to attack" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        hitPoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has no hit points left" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0) {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points." << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " has no energy left to repair" << std::endl;
    }
}

std::string ClapTrap::getName() const {
    return name;
}

int ClapTrap::getHitPoints() const {
    return hitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return energyPoints;
}

int ClapTrap::getAttackDamage() const {
    return attackDamage;
}