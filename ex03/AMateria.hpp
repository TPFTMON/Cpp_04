#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
// # include "ICharacter.hpp"

// Messages:
# define AMATERIA_MSG "\e[0;32mAMateria\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define STR_CONSTR_MSG "\e[0;33mString Parameter Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "

// Class Implementations:
class ICharacter;

class AMateria{

    protected:
        std::string _type;

    public:
        AMateria(std::string const & type);
        AMateria(const AMateria &src);
        AMateria& operator=(const AMateria &src);
        virtual ~AMateria();

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
