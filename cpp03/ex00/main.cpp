#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap robot("Mummie");

    std::cout << "Test 1: Attack"; 
    robot.attack("Target");

    std::cout << "Test 2: Take Damage"; 
    robot.takeDamage(5);

    std::cout << "Test 3: Take Damage multiple times";
    robot.takeDamage(5);
    robot.takeDamage(5);
    robot.takeDamage(5);

    std::cout << "Test 4: Be Repaired";
    robot.beRepaired(5);

    std::cout << "Test 5: Be Repaired multiple times";
    robot.beRepaired(5);
    robot.beRepaired(5);
    robot.beRepaired(5);
    robot.beRepaired(5);
    robot.beRepaired(5);
    robot.beRepaired(5);
    robot.beRepaired(5);
    robot.beRepaired(5);

    std::cout << "All tests passed!" << std::endl;

    return 0;
}
