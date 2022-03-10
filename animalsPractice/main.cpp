#include <iostream>
#include "animals.h"
#include "dog.h"
using namespace std;

int main(int argc, char** argv) {
    Animal animal;
    animal.talk();
    Animal* animal2 = new Animal(3,4);
    cout<<"Number of eyes in " << animal2->getEyes()<<endl;
    animal2->setFriend(new Animal());
    cout << "My Friend has " << animal2->getFriend()->getEyes() << " eyes" << endl;
    cout << "number of Animals created " << Animal::getNumberOfAnimals() << endl;
    delete animal2;
    animal2 = nullptr;
    cout << "number of Animals created " << Animal::getNumberOfAnimals() << endl;
    Animal *animals  = new Animal[3];
    for(int i = 0; i < 3; i++){
        animals[i].talk();
    }
    delete [] animals;
    animals = nullptr;
    //Dog * dog = new Dog("fido", 2,4);
    Animal * dog = new Dog("fido", 2,4);
    cout << ((Dog *)dog)->getName() << endl;
    delete dog;


}