#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "iostream"
#include "Zombie.hpp"

class Zombie
{
	private:
	std::string _name;

	public:
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);
	
	void set_name(std::string);
	std::string get_name();
	
	void announce(void);

	Zombie(std::string name);
	~Zombie();
};

#endif