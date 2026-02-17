#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

// Class Implementations:
class MateriaSource : public IMateriaSource{

    private:
        AMateria* _templates[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &src);
        MateriaSource& operator=(const MateriaSource &src);
        ~MateriaSource();

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif
