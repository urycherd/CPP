#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void testClapTrap() {
    std::cout << std::endl << "CLAPTRAP TESTS" << std::endl;
    ClapTrap robot("Mummie");

    robot.attack("Target");
    std::cout << "getEnergyPointsTest result: " << (robot.getEnergyPoints() == 9 ? "SUCCES" : "FAIL") << std::endl << std::endl;

    robot.takeDamage(5);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 5 ? "SUCCES" : "FAIL") << std::endl << std::endl;

    robot.beRepaired(5);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 10 ? "SUCCES" : "FAIL") << std::endl << std::endl << std::endl;
}

void testScavTrap() {
    std::cout << std::endl << "SCAVTRAP TESTS" << std::endl;
    ScavTrap robot("Guardian");

    robot.attack("Target");
    std::cout << "getEnergyPointsTest result: " << (robot.getEnergyPoints() == 42 ? "SUCCES" : "FAIL") << std::endl << std::endl;

    robot.takeDamage(5);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 95 ? "SUCCES" : "FAIL") << std::endl << std::endl;

    robot.beRepaired(5);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 100 ? "SUCCES" : "FAIL") << std::endl;
    std::cout << "getEnergyPointsTest result: " << (robot.getEnergyPoints() == 41 ? "SUCCES" : "FAIL") << std::endl;

    robot.guardGate();
}

void testFragTrap() {
    std::cout << std::endl << "FRAGTRAP TESTS" << std::endl;
    FragTrap robot("Destroyer");

    robot.attack("Target");
    std::cout << "getEnergyPointsTest result: " << (robot.getEnergyPoints() == 99 ? "SUCCES" : "FAIL") << std::endl << std::endl;

    robot.takeDamage(20);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 80 ? "SUCCES" : "FAIL") << std::endl << std::endl;

    robot.beRepaired(10);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 90 ? "SUCCES" : "FAIL") << std::endl;
    std::cout << "getEnergyPointsTest result: " << (robot.getEnergyPoints() == 98 ? "SUCCES" : "FAIL") << std::endl;

    robot.highFivesGuys();
}

int main() {
    testClapTrap();
    testScavTrap();
    testFragTrap();

    return 0;
}