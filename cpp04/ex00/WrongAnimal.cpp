#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type_("WrongAnimal")
{
	std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal( std::string type ) : type_(type)
{
	std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal& ref )
{
	*this = ref;
	std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor\n";
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other )
{
	if (this != &other)
		type_ = other.type_;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << type_ << ": [some animal sounds]\n";
}

std::string	WrongAnimal::getType( void ) const
{
	return (type_);
}
