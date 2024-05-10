#include "Zombie.hpp"
#include <iostream>

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "Yanki");

    // Test 1: Check if the Zombie class has a default constructor
    Zombie zombie;
    zombie.setName("Noname");
    zombie.announce();

    // Test 2: Check if the zombieHorde function allocates N zombies on the heap
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    // Test 3: Check if the zombies are initialized with the correct name
    for (int i = 0; i < N; ++i) {
        if (horde[i].getName() != "Yanki") {
            std::cout << "Zombie " << i << " has incorrect name" << std::endl;
        }
    }

    delete[] horde;

    return 0;
}