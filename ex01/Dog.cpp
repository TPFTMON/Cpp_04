#include "Dog.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
Dog::Dog() : Animal(){

    std::cout << DEF_CONSTR_MSG << DOG_MSG << "\n";

    this->_type = "Dog";

    this->_brain = new Brain();
    this->_brain->fillBrainWithIdeas("Let\'s eat some shoes! YES YES YES!");
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy){

    std::cout << COPY_CONSTR_MSG << DOG_MSG << "\n";

    this->_brain = new Brain(*to_copy._brain);
}


// Operators
Dog & Dog::operator=(const Dog &other){

    std::cout << COPY_ASSIGN_OP_MSG << DOG_MSG << "\n";

    if (this != &other){

        Animal::operator=(other);

        *this->_brain = *other._brain;
    }

    return *this;
}

// Destructor
Dog::~Dog(){

    std::cout << DESTR_MSG << DOG_MSG << "\n";

    delete this->_brain;
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void Dog::makeSound() const{

    std::cout << "WAF!WAF!WAF!WAF!WAF!WAF!\n";
}

void Dog::accessBrain() const{

    std::cout << "This Dog's ideas:\n";
    this->_brain->displayIdeas();
}
