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

    // delete this->_brain;
    // this->_brain = new Brain(to_copy._brain);  // (? Why an error ?)

    this->_brain = to_copy._brain; // (? Or how to make Brain's assignment operator visible for Cat ?)

    // for (size_t i = 0; i < MAX_IDEAS; i++){        // (? How to make MAX_IDEAS visible for Cat ?)

    //     this->_brain[i] = to_copy._brain[i];
    // }
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

    delete this->_brain;
}


// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void Cat::makeSound() const{

    std::cout << "Miaou! Meow! Мяу!\n";
}
