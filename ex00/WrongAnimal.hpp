#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

// Messages:
# define WRONGANIMAL_MSG "\e[0;32mWrongAnimal\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "

// Class implementations:
class WrongAnimal{

    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &to_copy);
        WrongAnimal& operator=(const WrongAnimal &assign);
        /*NO virtual*/~WrongAnimal();

        std::string getType() const;
        /*NO virtual */void makeSound() const;
};

#endif
