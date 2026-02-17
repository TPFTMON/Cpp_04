#include "Cat.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
Cat::Cat() : Animal(){

    std::cout << DEF_CONSTR_MSG << CAT_MSG << "\n";

    this->_type = "Cat";
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy){

    std::cout << COPY_CONSTR_MSG << CAT_MSG << "\n";
}


// Operators
Cat & Cat::operator=(const Cat &other){

    std::cout << COPY_ASSIGN_OP_MSG << CAT_MSG << "\n";

    if (this != &other)
        this->_type = other._type;
    return *this;
}

// Destructor
Cat::~Cat(){

    std::cout << DESTR_MSG << CAT_MSG << "\n";
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void Cat::makeSound() const{

    std::cout << "Miaou! Meow! Мяу!\n";
}
