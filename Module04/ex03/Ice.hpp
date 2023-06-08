#ifndef ICE_HPP
# define ICE_HPP

#include "main.hpp"

class Ice : public AMateria
{
	protected:
		std::string _type;

	public:
		Ice();
		// Ice(std::string const & type);
		Ice(const Ice &other);
		Ice &operator=(const Ice &other);
		~Ice();
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif