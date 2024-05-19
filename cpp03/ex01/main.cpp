#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void testClapTrap() {
    ClapTrap robot("Mummie");

    robot.attack("Target");
    std::cout << "getEnergyPointsTest result: " << (robot.getEnergyPoints() == 9 ? "success" : "fail") << std::endl << std::endl;

    robot.takeDamage(5);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 5 ? "success" : "fail") << std::endl << std::endl;

    robot.beRepaired(5);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 10 ? "success" : "fail") << std::endl << std::endl;
}

void testScavTrap() {
    std::cout << std::endl;
    ScavTrap robot("Guardian");

    robot.attack("Target");
    std::cout << "getEnergyPointsTest result: " << (robot.getEnergyPoints() == 42 ? "success" : "fail") << std::endl << std::endl;

    robot.takeDamage(5);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 95 ? "success" : "fail") << std::endl << std::endl;

    robot.beRepaired(5);
    std::cout << "getHitPointsTest result: " << (robot.getHitPoints() == 100 ? "success" : "fail") << std::endl;
    std::cout << "getEnergyPointsTest result: " << (robot.getEnergyPoints() == 41 ? "success" : "fail") << std::endl << std::endl;

    robot.guardGate();
}

int main() {
    ScavTrap robot("Guardian");
    robot.attack("Target");
    robot.guardGate();
    // testClapTrap();
    // testScavTrap();

    return 0;
}