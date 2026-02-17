#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

// Messages:
# define CAT_MSG "\e[0;32mCat\e[0m"

// Class implementations:
class Cat : public Animal{

    private:
        Brain* _brain;

    public:
        Cat();
        Cat(const Cat &to_copy);
        Cat& operator=(const Cat &assign);
        ~Cat();

        void makeSound() const;
};

#endif
