#include "Zombie.hpp"

Zombie::Zombie() {}
void	Zombie::setName( std::string name)
{
	this->name = name;
}

std::string Zombie::getName() const
{
    return name;
}

Zombie::~Zombie()
{
    std::cout << name << " is dead" << std::endl;
}

void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}