#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>


class Fixed{

	private :
		int _entier;
		static const int _entier_statique = 8;

	public :
		Fixed();
		Fixed(int IntNumber);
		Fixed(float FloatNumber);
		Fixed (const Fixed &obj);
		~Fixed();

 		Fixed &operator=(const Fixed &ope);
		bool operator>(const Fixed &ope);
		bool operator<(const Fixed &ope);
		bool operator>=(const Fixed &ope);
		bool operator<=(const Fixed &ope);
		bool operator==(const Fixed &ope);
		bool operator!=(const Fixed &ope);
		
		Fixed operator+(const Fixed &ope);
		Fixed operator-(const Fixed &ope);
		Fixed operator*(const Fixed &ope);
		Fixed operator/(const Fixed &ope);

		Fixed &operator++();
		Fixed operator++(int incr);
		Fixed &operator--();
		Fixed operator--(int incr);

		static Fixed min(Fixed &a, Fixed &b);
		const static Fixed min(const Fixed &a, const Fixed &b);
		
		static Fixed max(Fixed &a, Fixed &b);
		const static Fixed max(const Fixed &a, const Fixed &b);



		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
