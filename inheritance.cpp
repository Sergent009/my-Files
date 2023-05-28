#include <iostream>

using namespace std;

class aNimal{                    //superior-class.                           //'Dog' is a sub-class of 'Cat'(which is a superior class) and
public:                                                                      //'Cat' is a sub-class of 'aNimal'(which is a superior class).
    void speak(){                                                            //the 'aNimal' class doesn't know anythin about 'Cat' or 'Dog' class.
        cout << "Ggggrrrrr!!" << endl;                                       //but,the 'Dog' class knows about 'cat' and 'aNimal' class.
    }                                                                        //similarly, the 'Cat' class just knows about the 'aNimal' class.
};

class Cat: public aNimal{        //sub-class.
public:
    void EaT(){
        cout << "The cat is eating food!" << endl;
    }
};

class Dog: public Cat{
public:
    void bark(){
        cout << "Bow Bow boooowww!!!" << endl;
    }
};

int main(){
    aNimal k;
    k.speak();

    Cat coco;
    coco.speak();
    coco.EaT();

    Dog G_shepherd;
    G_shepherd.bark();

    G_shepherd.speak();
    G_shepherd.EaT();


    return 0;
}
