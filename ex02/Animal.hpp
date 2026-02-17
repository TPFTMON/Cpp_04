#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

// Messages:
# define ANIMAL_MSG "\e[0;32mAnimal\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "

// Class implementations:
class Animal{

    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal &to_copy);
        Animal& operator=(const Animal &assign);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif
