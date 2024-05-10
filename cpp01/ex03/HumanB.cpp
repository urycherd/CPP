# include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() const {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}