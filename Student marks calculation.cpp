//input the no of students in the class.
//calculate the average marks of the class.
#include <iostream>
using namespace std;

int main(){
    cout << "===== STUDENT AVERAGE MARKS CALCULATION PROGRAM =====" << endl;
    cout << "-----------------------------------------------------" << endl;
    int n;
     cout << "Enter the number of students in the class:" << endl;
     cin >> n;

     int clas[n];

     for(int i=0; i<n; i++){
        cout << "Marks Of Student:" << i+1 << endl;
        cin >> clas[i];
     }

     int sum=0;
     for(int i=0; i<n; i++){
        sum = sum + clas[i];
     }

     float average = (sum)/n;
     cout << "The average marks of the class is: " << average << endl;

     if(average >= 50 && average < 60){
        cout << "The average grade of class is: C" << endl;
     }
     else if(average >= 60 && average < 70){
        cout << "The average grade of class is: B" << endl;
     }

     else if(average >= 70 && average < 80){
        cout << "The average grade of class is: A" << endl;
     }

     else if(average >= 80 && average <= 100){
        cout << "The average grade of class is: A++" << endl;
     }

    return 0;
}