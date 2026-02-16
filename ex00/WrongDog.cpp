#include "WrongDog.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
WrongDog::WrongDog() : WrongAnimal(){

    std::cout << DEF_CONSTR_MSG << WRONGDOG_MSG << "\n";

    this->_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &to_copy) : WrongAnimal(to_copy){

    std::cout << COPY_CONSTR_MSG << WRONGDOG_MSG << "\n";
}


// Operators
WrongDog & WrongDog::operator=(const WrongDog &other){

    std::cout << COPY_ASSIGN_OP_MSG << WRONGDOG_MSG << "\n";

    if (this != &other)
        this->_type = other._type;
    return *this;
}

// Destructor
WrongDog::~WrongDog(){

    std::cout << DESTR_MSG << WRONGDOG_MSG << "\n";
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void WrongDog::makeSound() const{

    std::cout << "VERY WRONG WAF!\n";
}
