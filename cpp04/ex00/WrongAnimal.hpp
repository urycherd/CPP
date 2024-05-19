#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& ref );
		virtual ~WrongAnimal( void );
		WrongAnimal& operator=( const WrongAnimal& other );

		std::string	getType( void ) const;
		void	makeSound( void ) const;

	protected:
		std::string	type_;
};

#endif
