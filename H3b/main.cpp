#include "animal.h"
#include "dog.h"

int main() {

    Animal* animal = new Animal();
    animal->callOut();

    Animal* dog = new Dog();
    dog->callOut();

    cout<<endl;

    delete animal;
    delete dog;

    return 0;
}
