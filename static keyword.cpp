#include <iostream>

using namespace std;

class Ubit{
public:
    static int students;

public:
    static void show_info(){
    cout << students << endl;
    }

};
int Ubit::students = 65;

int main(){
    cout << Ubit::students << endl;
    Ubit::show_info();
    return 0;
}