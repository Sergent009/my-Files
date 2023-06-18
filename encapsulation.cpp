#include <iostream>

using namespace std;

class dog{
    private:
    string name;

    private:
     string getname(){
        return name;
    }

    public:
    dog(string name): name(name){}
   // string getname(){     return name;}
    void info(){
    cout << "My name is:" << getname() << endl;
    }
};

int main(){
    dog Dog("pablo");
   // cout << Dog.getname() << endl;
   Dog.info();


    return 0;
}