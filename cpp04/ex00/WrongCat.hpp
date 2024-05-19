#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat& ref);
		~WrongCat( void );
		void	makeSound( void ) const;

	private:
		std::string	type_;
};

#endif
