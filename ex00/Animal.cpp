#include "Animal.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
Animal::Animal()
    : _type("The Creature")
{
    std::cout << DEF_CONSTR_MSG << ANIMAL_MSG << "\n";
}

Animal::Animal(const Animal &to_copy){

    std::cout << COPY_CONSTR_MSG << ANIMAL_MSG << "\n";

    this->_type = to_copy._type;
}


// Operators
Animal & Animal::operator=(const Animal &other){

    std::cout << COPY_ASSIGN_OP_MSG << ANIMAL_MSG << "\n";

    if (this != &other)
        this->_type = other._type;
    return *this;
}

// Destructor
Animal::~Animal(){

    std::cout << DESTR_MSG << ANIMAL_MSG << "\n";
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

std::string Animal::getType() const{

    return(this->_type);
}

void Animal::makeSound() const{

    std::cout << "Epic Primordial Roar\n";
}




// Animal::Animal(std::string name)
//     :
// {

//     std::cout << STR_CONSTR_MSG << ANIMAL_MSG << "\n";
// }
