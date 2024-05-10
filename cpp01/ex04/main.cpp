#include <iostream>
#include "replace.hpp"

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cout << "Usage: ./replace [filename] [s1] [s2]\n";
        return 1;
    }

    try {
        replace(argv[1], argv[2], argv[3]);
        std::cout << "File replaced successfully.\n";
    } catch (std::exception& e) {
        std::cout << "An error occurred: " << e.what() << '\n';
    }

    return 0;
}