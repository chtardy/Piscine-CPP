// Maintenant, créez deux classes HumanA et HumanB. Toutes deux possèdent une
// Weapon et un name, ainsi qu’une fonction membre attack() affichant (sans les chevrons
// bien sûr) :
// <name> attacks with their <weapon type>
// HumanA et HumanB sont presque identiques, à l’exception de deux petits détails :
// • Alors que le constructeur de HumanA prend une Weapon comme paramètre, ce
// n’est pas le cas de celui de HumanB.
// • HumanB n’aura pas toujours une Weapon, tandis que HumanA en aura forcément une.

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif