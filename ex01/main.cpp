#include "Cat.hpp"
#include "Dog.hpp"

#define ARRAY_SIZE 6

int main(){

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    delete dog; //should not create a leak
    delete cat;



    Dog originalDog;
    {
        Dog copyDog(originalDog); // Tests Copy Constructor      or Dog copyDog = originalDog;
        copyDog.makeSound();

    } // copyDog's destructor is called here.
    // IF SHALLOW COPY: copyDog just deleted originalDog's Brain!

    originalDog.accessBrain();
    // IF SHALLOW COPY: This might segfault, and the destructor below WILL double-free and crash.



    Animal* cats_and_dogs[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        if (i < ARRAY_SIZE / 2)
            cats_and_dogs[i] = new Dog();
        else
            cats_and_dogs[i] = new Cat();
    }

    for (int i = 0; i < ARRAY_SIZE; i++){
        cats_and_dogs[i]->makeSound();
    }

    // If Animal destructor is not virtual, Brains will leak here!
    for (int i = 0; i < ARRAY_SIZE; i++){
        delete cats_and_dogs[i];
    }



    return (0);
}
