#include <iostream>

using namespace std;


void SomeCode(double &num){                     //'&' is a reference sign.which gives reference to a variable from another variable.
    num = 444.4;
}


int main(){
    double val1 = 223.1;
    double val2 = val1;
    val2 = 554.7;
    cout << val1 << endl;
    cout << val2 << endl;

    double value1 = 223.1;
    double &value2 = val1;
    val2 = 554.7;
    cout << value1 << endl;
    cout << value2 << endl;


    double num = 111.1;
    SomeCode(num);
    cout << num << endl;






    return 0;
}
