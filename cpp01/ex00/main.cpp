#include "Zombie.hpp"


int main()
{
    Zombie* zombie = newZombie("Izabela");
    zombie->announce();
    delete zombie;

    randomChump("Zidane");

    return 0;
}