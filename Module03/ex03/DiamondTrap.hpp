#ifndef DiamondTRAP_HPP
# define DiamondTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string _name;
		int DHP;
		int DEP;
		int DAD;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap();

		void whoAmI();

	int getDAD() {
		return DAD;
	}

	int getDEP() {
		return DEP;
	}

	int getDHP() {
		return DHP;
	}
};

#endif