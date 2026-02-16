#include "WrongCat.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
WrongCat::WrongCat() : WrongAnimal(){

    std::cout << DEF_CONSTR_MSG << WRONGCAT_MSG << "\n";

    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &to_copy) : WrongAnimal(to_copy){

    std::cout << COPY_CONSTR_MSG << WRONGCAT_MSG << "\n";
}


// Operators
WrongCat & WrongCat::operator=(const WrongCat &other){

    std::cout << COPY_ASSIGN_OP_MSG << WRONGCAT_MSG << "\n";

    if (this != &other)
        this->_type = other._type;
    return *this;
}

// Destructor
WrongCat::~WrongCat(){

    std::cout << DESTR_MSG << WRONGCAT_MSG << "\n";
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void WrongCat::makeSound() const{

    std::cout << "Wrong Miaou! Wrong Meow! And Wrong Мяу!\n";
}
