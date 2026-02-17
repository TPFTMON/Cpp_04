#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int main(){

//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     ICharacter* me = new Character("me");

//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");

//     me->use(0, *bob);
//     me->use(1, *bob);



//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // The 5th equip should fail gracefully and NOT leak memory!
//     AMateria* excessMateria = src->createMateria("ice");
//     me->equip(excessMateria);
//     // Since it wasn't equipped, WE are responsible for deleting it so it doesn't leak.
//     delete excessMateria;

//     Character* originalCloud = new Character("Cloud");
//     originalCloud->equip(src->createMateria("ice"));

//     Character* copyCloud = new Character(*originalCloud); // Use copy constructor

//     originalCloud->use(0, *bob);
//     copyCloud->use(0, *bob);



//     // We MUST save the pointer before unequipping, otherwise it leaks!
//     AMateria* unequippedItem = src->createMateria("cure");
//     copyCloud->equip(unequippedItem);

//     copyCloud->unequip(1);

//     // Testing use on an empty/unequipped slot (should do nothing, not crash)
//     copyCloud->use(1, *bob);

//     // Manual cleanup of the unequipped item to prevent the leak
//     delete unequippedItem;

//     delete bob;
//     delete me;
//     delete src;
//     delete originalCloud;
//     delete copyCloud;

//     return 0;
// }


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}
