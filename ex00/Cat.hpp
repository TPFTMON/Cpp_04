#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

// Messages:
# define CAT_MSG "\e[0;32mCat\e[0m"

// Class implementations:
class Cat : public Animal{

    public:

        void makeSound() const;
};

#endif
