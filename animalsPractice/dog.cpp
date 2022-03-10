#include "dog.h"

Dog::Dog(string name){
    this->name = name;
}

Dog::Dog(string name, int eyes , int legs ) : Animal(eyes, legs){
    this->name = name;
}