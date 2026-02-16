#ifndef WrongDOG_HPP
# define WrongDOG_HPP

# include "WrongAnimal.hpp"

// Messages:
# define WRONGDOG_MSG "\e[0;32mWrongDog\e[0m"

// Class implementations:
class WrongDog : public WrongAnimal{

    public:
        WrongDog();
        WrongDog(const WrongDog &to_copy);
        WrongDog& operator=(const WrongDog &assign);
        ~WrongDog();

        void makeSound() const;
};

#endif
