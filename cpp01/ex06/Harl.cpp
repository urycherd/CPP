# include "Harl.hpp"

Harl::Harl() {
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
}

void Harl::complain(std::string level) {
    const int kLevels = 4;
    int i = -1;
    std::string complainLevels[kLevels];
    complainLevels[0] = "DEBUG";
    complainLevels[1] = "INFO";
    complainLevels[2] = "WARNING";
    complainLevels[3] = "ERROR";

    for (i = 0; i < kLevels; i++) {
        if (level == complainLevels[i]) {
            break;
        }
    }

    switch (i) {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void Harl::debug( void ) {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info( void ) {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\n You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\n I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error( void ) {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

