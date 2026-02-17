#include "Brain.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// Constructors
Brain::Brain(){

    std::cout << DEF_CONSTR_MSG << BRAIN_MSG << "\n";
}

Brain::Brain(const Brain &to_copy){

    std::cout << COPY_CONSTR_MSG << BRAIN_MSG << "\n";


}


// Operators
Brain & Brain::operator=(const Brain &other){

    std::cout << COPY_ASSIGN_OP_MSG << BRAIN_MSG << "\n";


}

// Destructor
Brain::~Brain(){

    std::cout << DESTR_MSG << BRAIN_MSG << "\n";
}
