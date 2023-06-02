#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout << "????????" << endl;
    }
};
class Dog : public Animal{
    public:
    void speak(){
        cout << "Bow bow booow!!!" << endl;
    }
};
class houseDog : public Dog{
    public:
    void speak(){
        cout << "Awooooooooo!!!" << endl;
    }
};

int main(){
    Animal *Aptr = new houseDog;
    Aptr->speak();
    delete Aptr;

    return 0;
}