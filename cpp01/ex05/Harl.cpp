# include "Harl.hpp"

Harl::Harl() {
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
}

void Harl::complain(std::string level) {
    const int kLevels = 4;
    std::string complainLevels[kLevels];
    complainLevels[0] = "DEBUG";
    complainLevels[1] = "INFO";
    complainLevels[2] = "WARNING";
    complainLevels[3] = "ERROR";

    for (int i = 0; i < kLevels; i++) {
        if (level == complainLevels[i]) {
            (this->*functions[i])();
            return;
        }
    }

    std::cout << "Invalid complaint level: " << level << std::endl;
}

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

