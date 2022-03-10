#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
using namespace std;
#include "animals.h"

class Dog: public Animal {
    private: 
        string name;
    public:
        Dog(string name);
        Dog(string name, int eyes , int legs );

        string getName() {
            return this->name;
        }
        ~Dog(){
            cout << name << " is dead" << endl;
        }
};
#endif 