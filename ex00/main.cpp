#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main(){

    const Animal* meta = new Animal();
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();

    std::cout << cat->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;

    cat->makeSound(); //will output the Cat sound!
    dog->makeSound();
    meta->makeSound();

    delete meta;
    delete cat;
    delete dog;



    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();
    const WrongAnimal* wrong_dog = new WrongDog();

    std::cout << wrong_cat->getType() << " " << std::endl;
    std::cout << wrong_dog->getType() << " " << std::endl;

    wrong_cat->makeSound(); //will output the WrongAnimal sound!
    wrong_dog->makeSound();
    wrong_meta->makeSound();

    delete wrong_meta;
    delete wrong_cat;
    delete wrong_dog;



    const WrongCat* wrong_wrong_cat = new WrongCat();
    const WrongDog* wrong_wrong_dog = new WrongDog();

    std::cout << wrong_wrong_cat->getType() << " " << std::endl;
    std::cout << wrong_wrong_dog->getType() << " " << std::endl;

    wrong_wrong_cat->makeSound(); // NOW it will output the WrongCat sound!
    wrong_wrong_dog->makeSound();

    delete wrong_wrong_cat;
    delete wrong_wrong_dog;

    return (0);
}
