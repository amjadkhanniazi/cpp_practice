#include <iostream>
using namespace std;
// class animal
class Animal{
    public:
    void AnimalSound(){
        cout<<"\nAnimal Sound\n";
    }
};

//Dog Sound
class Dog: public Animal{
    public:
    void AnimalSound(){
        cout<<"\nDog Sounds: Wu Wu\n";
    }
};
//Cat sound
class Cat: public Animal{
    public:
    void AnimalSound(){
        cout<<"\nCat Sounds: Meow Meow\n";
    }
};


int main(){
    Animal obj;
    Dog objDog;
    Cat objCat;
    obj.AnimalSound();
    objDog.AnimalSound();
    objCat.AnimalSound();

    return 0;
}