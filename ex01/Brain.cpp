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

    // Deep copy instead of shallow (I was not going to do shallow anyway but if you specifically insist...)
    for (size_t i = 0; i < MAX_IDEAS; i++){

        this->_ideas[i] = to_copy._ideas[i];
    }
}

// Operators
Brain & Brain::operator=(const Brain &other){

    std::cout << COPY_ASSIGN_OP_MSG << BRAIN_MSG << "\n";

    // Also a deep copy
    if (this != &other){

        for (size_t i = 0; i < MAX_IDEAS; i++){

            this->_ideas[i] = other._ideas[i];
        }
    }
    return (*this);
}

// Destructor
Brain::~Brain(){

    std::cout << DESTR_MSG << BRAIN_MSG << "\n";
}



// ================================================================
//                  OTHER PUBLIC MEMBER FUNCTIONS
// ================================================================

void Brain::fillBrainWithIdeas(std::string idea){

    std::cout << FILL_BRAIN_MSG << BRAIN_MSG << "\n";

    for (size_t i = 0; i < (MAX_IDEAS - 1); i++){
        this->_ideas[i] = idea;
    }

    this->_ideas[MAX_IDEAS] = "I DON\'T WANT TO SET THE WORLD ON FIRE! I PR0MISE!";
}

