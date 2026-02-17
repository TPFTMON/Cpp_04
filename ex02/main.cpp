#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal* testAnimal = new Animal();
    // Error should be: "allocating an object of abstract class type 'Animal'"

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    return (0);
}
