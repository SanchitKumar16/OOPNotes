#ifndef ANIMAL_H
#define ANIMAL_H
class Animal {
    private:
        int eyes;
        int legs;
        Animal *myfriend;
        static int count;
    public:
        int getEyes();
        int getLegs();
        void setEyes(int eyes);
        void setLegs(int legs);
        Animal(int eyes,int legs);
        Animal();
        virtual void walk();
        virtual void talk();
        virtual void eat();
        static int getNumberOfAnimals(){
            return  Animal::count;
        }

        void setFriend(Animal *myfriend){
            this->myfriend = myfriend;
        }

         Animal * getFriend(){
            return this->myfriend;
        }

        virtual ~Animal();
     
};
#endif