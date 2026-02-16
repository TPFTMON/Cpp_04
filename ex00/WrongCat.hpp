#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

// Messages:
# define WRONGCAT_MSG "\e[0;32mWrongCat\e[0m"

// Class implementations:
class WrongCat : public WrongAnimal{

    public:
        WrongCat();
        WrongCat(const WrongCat &to_copy);
        WrongCat& operator=(const WrongCat &assign);
        ~WrongCat();

        void makeSound() const;
};

#endif
