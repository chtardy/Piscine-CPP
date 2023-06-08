#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "main.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_msource[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource &operator=(const MateriaSource &other);
		~MateriaSource();
		AMateria *getMateria(int index) const;
		void learnMateria(AMateria *MateriaGiven);
		AMateria* createMateria(std::string const & type);
};

#endif