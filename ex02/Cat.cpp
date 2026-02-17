#include "Cat.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
Cat::Cat() : Animal(){

    std::cout << DEF_CONSTR_MSG << CAT_MSG << "\n";

    this->_type = "Cat";

    this->_brain = new Brain();
    this->_brain->fillBrainWithIdeas("I should break something expensive.");
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy){

    std::cout << COPY_CONSTR_MSG << CAT_MSG << "\n";

    this->_brain = new Brain(*to_copy._brain);
}


// Operators
Cat & Cat::operator=(const Cat &other){

    std::cout << COPY_ASSIGN_OP_MSG << CAT_MSG << "\n";

    if (this != &other){

        Animal::operator=(other);

        *this->_brain = *other._brain;   // This triggers Brain's assignment operator (we dereference both Brains to make them into objects)
    }

    return *this;
}

// Destructor
Cat::~Cat(){

    std::cout << DESTR_MSG << CAT_MSG << "\n";

    delete this->_brain;
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void Cat::makeSound() const{

    std::cout << "Miaou! Meow! Мяу!\n";
}

void Cat::accessBrain() const{

    std::cout << "This Cat's ideas:\n";
    this->_brain->displayIdeas();
}
