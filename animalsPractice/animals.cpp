#include <iostream>
#include "animals.h"
using namespace std;

int Animal::count = 0;
int Animal::getEyes() {
    return this->eyes;
}
int Animal::getLegs() {
    return this->legs;
}
void Animal::setEyes(int eyes) {
    this->eyes = eyes;
}
void Animal::setLegs(int legs) {
    this->legs = legs; 
}
Animal::Animal(int eyes,int legs) {
    this->eyes = eyes;
    this->legs = legs;
    this->myfriend = nullptr;
    Animal::count++;
   
}
Animal::Animal() {
    this->eyes = 2;
    this->legs = 4;
    this->myfriend = nullptr;
     Animal::count++;
   
}
void Animal::walk() {
    cout<<"I am walking"<<endl;
}
void Animal::talk() {
    cout<<"I am talking"<<endl;
}
void Animal::eat() {
    cout<<"I am eating"<<endl;
}

Animal::~Animal() {
    if(myfriend!= nullptr) {
        delete myfriend;
        myfriend = nullptr;
       
    }
     Animal::count--;
    cout<<"I am dead"<<endl;
}