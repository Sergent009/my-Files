#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int roll_no;
    int seat_no;

    student(string name, int roll_no, int seat_no){
        this->name = name;
        this->roll_no = roll_no;
        this->seat_no = seat_no;
    }

    void display(){
        cout << name << endl;
        cout << roll_no << endl;
        cout << seat_no << endl;
    }
};

int main(){
    student kdn={"Abdul Mannan Khan", 171, 2};
    kdn.display();


    return 0;
}