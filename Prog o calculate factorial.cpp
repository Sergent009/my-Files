#include <iostream>
using namespace std;

int calFactorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*calFactorial(n-1);
    }
}

int main(){
    int number;
    cout << "Enter the Number:" << endl;
    cin >> number;

    int factorial = calFactorial(number);
    cout << "Factorial of " << number << " is: " << factorial;

    return 0;
}