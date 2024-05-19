#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

void testClapTrap() {
    std::cout << std::endl << "CLAPTRAP TESTS" << std::endl;
    ClapTrap robot("Mummie");
    robot.attack("Target");
    robot.takeDamage(5);
    robot.beRepaired(5);
}

void testScavTrap() {
    std::cout << std::endl << "SCAVTRAP TESTS" << std::endl;
    ScavTrap robot("Guardian");
    robot.attack("Target");
    robot.takeDamage(5);
    robot.beRepaired(5);
    robot.guardGate();
}

void testFragTrap() {
    std::cout << std::endl << "FRAGTRAP TESTS" << std::endl;
    FragTrap robot("Destroyer");
    robot.attack("Target");
    robot.takeDamage(20);
    robot.beRepaired(10);
    robot.highFivesGuys();
}

int main() {

    DiamondTrap robot("Diamond");

    testClapTrap();
    testScavTrap();
    testFragTrap();

    return 0;
}