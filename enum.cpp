#include <iostream>
using namespace std;

enum directions{
    north, south, east, west
};
int main(){
    directions d;
    d = south;
    cout << "d:" << d + 1 << endl; 

    return 0;
}