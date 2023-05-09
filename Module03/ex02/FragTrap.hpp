#ifndef FragTRAP_HPP
# define FragTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	protected :
		std::string _nameDaughter;

	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap();

		void highFivesGuys(void);
		void colorNameDaughter(const std::string &color);

} ;

#endif