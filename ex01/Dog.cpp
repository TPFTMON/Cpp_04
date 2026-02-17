#include "Dog.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
Dog::Dog() : Animal(){

    std::cout << DEF_CONSTR_MSG << DOG_MSG << "\n";

    this->_type = "Dog";

    this->_brain = new Brain();
    this->_brain->fillBrainWithIdeas("Let\'s eat the slippers! YES YES YES!");
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy){

    std::cout << COPY_CONSTR_MSG << DOG_MSG << "\n";
}


// Operators
Dog & Dog::operator=(const Dog &other){

    std::cout << COPY_ASSIGN_OP_MSG << DOG_MSG << "\n";

    if (this != &other)
        this->_type = other._type;
    return *this;
}

// Destructor
Dog::~Dog(){

    std::cout << DESTR_MSG << DOG_MSG << "\n";
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void Dog::makeSound() const{

    std::cout << "WAF!WAF!WAF!WAF!WAF!WAF!\n";
}
