#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "iostream"

class Weapon
{
	private:
	std::string _type;

	public:
	Weapon(std::string name);
	Weapon();
	~Weapon();
    const std::string& getType() const;
    void setType(std::string newType);
};

#endif