#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

// Messages:
# define DOG_MSG "\e[0;32mDog\e[0m"

// Class implementations:
class Dog : public Animal{

    private:
        Brain* _brain;

    public:
        Dog();
        Dog(const Dog &to_copy);
        Dog& operator=(const Dog &assign);
        ~Dog();

        void makeSound() const;
};

#endif
