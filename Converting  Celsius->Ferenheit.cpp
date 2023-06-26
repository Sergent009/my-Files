#include <iostream>
using namespace std;

double CELtoFER(int celsius){
    return (celsius*9/5+32);
}

int main(){
    int celsius;
    cout << "Enter the temprature in centigrade:" << endl;
    cin >> celsius;

    double result = CELtoFER(celsius);
    cout << "result in Fehrenheit is:" << result << endl;

    return 0;
}