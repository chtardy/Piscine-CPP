// Maintenant, créez deux classes HumanA et HumanB. Toutes deux possèdent une
// Weapon et un name, ainsi qu’une fonction membre attack() affichant (sans les chevrons
// bien sûr) :
// <name> attacks with their <weapon type>
// HumanA et HumanB sont presque identiques, à l’exception de deux petits détails :
// • Alors que le constructeur de HumanA prend une Weapon comme paramètre, ce
// n’est pas le cas de celui de HumanB.
// • HumanB n’aura pas toujours une Weapon, tandis que HumanA en aura forcément une.

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif