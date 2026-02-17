#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : _type(type){
}

AMateria::AMateria(const AMateria &src) : _type(src._type){
}

AMateria::~AMateria(){
}

// The subject says type shouldn't be copied.
AMateria& AMateria::operator=(const AMateria &src){
    (void)src;
    return *this;
}

std::string const & AMateria::getType() const{
    return this->_type;
}

void AMateria::use(ICharacter& target){
    (void)target;
}
