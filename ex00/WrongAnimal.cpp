#include "WrongAnimal.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
WrongAnimal::WrongAnimal()
    : _type("The Creature")
{
    std::cout << DEF_CONSTR_MSG << WRONGANIMAL_MSG << "\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &to_copy){

    std::cout << COPY_CONSTR_MSG << WRONGANIMAL_MSG << "\n";

    this->_type = to_copy._type;
}


// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other){

    std::cout << COPY_ASSIGN_OP_MSG << WRONGANIMAL_MSG << "\n";

    if (this != &other)
        this->_type = other._type;
    return *this;
}

// Destructor
WrongAnimal::~WrongAnimal(){

    std::cout << DESTR_MSG << WRONGANIMAL_MSG << "\n";
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

std::string WrongAnimal::getType() const{

    return(this->_type);
}

void WrongAnimal::makeSound() const{

    std::cout << "Incredibly Wrong Epic Primordial Roar\n";
}
