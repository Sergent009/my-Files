#include <iostream>
using namespace std;

struct rectangle{
    int height;
    int width;
};

int main(){
    rectangle rec;
    rec.height = 9;
    rec.width = 5;

    cout << "Area of rectangle is:" << (rec.height*rec.width) << endl;

    return 0;
}