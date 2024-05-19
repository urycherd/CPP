#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main( void ) {

    const Animal* meta = new Animal();
    const Animal* dog_ = new Dog();
    const Animal* cat_ = new Cat();
    std::cout << dog_->getType() << " " << std::endl;
    std::cout << cat_->getType() << " " << std::endl;
    cat_->makeSound();
    dog_->makeSound();
    meta->makeSound();

    const WrongAnimal* wrongAnimal_ = new WrongAnimal();
    const WrongCat* wrongcat_ = new WrongCat();
    std::cout << wrongcat_->getType() << " " << std::endl;
    wrongcat_->makeSound(); 
    wrongAnimal_->makeSound();

    delete meta;
    delete dog_;
    delete cat_;
    delete wrongAnimal_;
    delete wrongcat_;

    return 0;
}
