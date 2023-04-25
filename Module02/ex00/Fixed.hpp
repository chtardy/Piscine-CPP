#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{

	private :
		int _entier;
		static const int _entier_statique = 8;

	public :
		Fixed();
		Fixed (const Fixed &obj);
 		Fixed& operator=(const Fixed& ope);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif