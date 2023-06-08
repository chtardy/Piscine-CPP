#ifndef CURE_HPP
# define CURE_HPP

#include "main.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		// Cure(std::string const & type);
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		~Cure();

		
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif