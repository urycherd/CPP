# include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor\n";
}

WrongCat::WrongCat( const WrongCat& ref) : WrongAnimal()
{
	type_ = ref.type_;
	std::cout << "WrongCat constructor\n";
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor\n";
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat: meow meow\n";
}
