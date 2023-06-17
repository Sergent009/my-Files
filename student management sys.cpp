#include <iostream>
#include <fstream>
using namespace std;

string arr1[20],arr4[20],arr5[20];
int arr2[20],arr3[20];
int total = 0;
int choice;
void enter_data(){
    if(total == 0){
        total = total+choice;
    cout << "How many students you want to enter:" <<  endl;
    cin >> choice;
    cout << endl;
    for(int i = 0; i < choice; i++){
    cout << "Enter the name of the student:" << i+1 <<  endl;
    cin.ignore();
    getline(cin, arr1[i]);
    cout << "Enter the roll no of the student:" << i+1 << endl;
    cin >> arr2[i];
    cout << "Enter the class of the student :" << i+1 << endl;
    cin >> arr3[i];
    cin.ignore();
    cout << "Enter the name of the school:" << i+1 << endl;
    getline(cin, arr4[i]);
    cout << "Enter the name of the teacher:" << i+1 << endl;
    getline(cin, arr5[i]);
}
    }
    else{
        for(int i = total; i < total+choice; i++){
    cout << "Enter the name of the student:" << i+1 <<  endl;
    cin.ignore();
    getline(cin, arr1[i]);
    cout << "Enter the roll no of the student:" << i+1 << endl;
    cin >> arr2[i];
    cout << "Enter the class of the student :" << i+1 << endl;
    cin >> arr3[i];
    cin.ignore();
    cout << "Enter the name of the school:" << i+1 << endl;
    getline(cin, arr4[i]);
    cout << "Enter the name of the teacher:" << i+1 << endl;
    getline(cin, arr5[i]);
}
    }
    total = total+choice;

    ofstream write;
    write.open("sample file 2.txt", ios::app);
    for(int i=0; i<total; i++){
    cout << endl;
    write << arr1[i] << endl;
    write << arr2[i] << endl;
    write << arr3[i] << endl;
    write << arr4[i] << endl;
    write << arr5[i] << endl;
    write.close();
    }
}

void show_data(){
    for(int i=0; i<total; i++){
    cout << "Show the data of the student" << i+1  << endl;   
    cout << "Name: " << arr1[i] << endl;
    cout << "Roll_No: " << arr2[i] << endl;
    cout <<  "Class: " << arr3[i] << endl;
    cout <<  "Name of school/college: " << arr4[i] << endl;
    cout <<  "Name of course: " << arr5[i] << endl;
    }
}

void search_data(){
    int rollno;
    cout << "Enter the rollno of the student:" << endl;
    cin >> rollno;
    for(int i=0; i<total; i++){
    if(rollno == arr2[i]){
    cout << "Name: " << arr1[i] << endl;
    cout << "Roll_No: " << arr2[i] << endl;
    cout <<  "Class: " << arr3[i] << endl;
    cout <<  "Name of school/college: " << arr4[i] << endl;
    cout <<  "Name of course: " << arr5[i] << endl;
    }
    }
}

void update_data(){
    int roll_no;
    cout << "Enter the roll_no of the student to update his data:" << endl;
    cin >> roll_no;
    for(int i=0; i<total; i++){
    if(roll_no == arr2[i]){
    cout << "Previous Information:" << endl;
    cout << endl;
    cout << "Name: " << arr1[i] << endl;
    cout << "Roll_No: " << arr2[i] << endl;
    cout <<  "Class: " << arr3[i] << endl;
    cout <<  "Name of school/college: " << arr4[i] << endl;
    cout <<  "Name of course: " << arr5[i] << endl;
    }
    }
    cout << "Update the information:" << endl;
    for(int i = 0; i < choice; i++){
    cout << "Enter the name of the student:" << i+1 <<  endl;
    cin.ignore();
    getline(cin, arr1[i]);
    cout << "Enter the roll no of the student:" << i+1 << endl;
    cin >> arr2[i];
    cout << "Enter the class of the student :" << i+1 << endl;
    cin >> arr3[i];
    cin.ignore();
    cout << "Enter the name of the school:" << i+1 << endl;
    getline(cin, arr4[i]);
    cout << "Enter the name of the teacher:" << i+1 << endl;
    getline(cin, arr5[i]);
}
    for(int i=0; i<total; i++){
    cout << "Name: " << arr1[i] << endl;
    cout << "Roll_No: " << arr2[i] << endl;
    cout <<  "Class: " << arr3[i] << endl;
    cout <<  "Name of school/college: " << arr4[i] << endl;
    cout <<  "Name of teacher: " << arr5[i] << endl;
    cout << endl;
}
}

void delete_data(){
    int del;
    cout << "If you want to delete the data please press 1 or 2" << endl;
    cin >> del;

    if(del == 1){
        total = 0;
        cout << "All records are deleted!!..." << endl;
    } 
    else if(del == 2){
        int rolno;
        cout << "Enter the roll no you want to delete:" << endl;
        cin >> rolno;

        for(int i=0; i<total; i++){
            if(rolno == arr2[i]){
                for(int j=i; j<total; j++){
                    arr1[j] = arr1[j+1];
                    arr2[j] = arr2[j+1];
                    arr3[j] = arr3[j+1];
                    arr4[j] = arr4[j+1];
                    arr5[j] = arr5[j+1];
                }
                total--;
                cout << "your required record is deleted!!...";
            }
        }
    }
}


int main(){

    while(true){
    int value;
    cout << "===== STUDENT MANAGEMENT SYSTEM =====" << endl;
    cout << endl;
    cout << "1- Enter the data of student" << endl;
    cout << "2- Show the data of the student" << endl;
    cout << "3- Search the data of the student" << endl;
    cout << "4- Update the data of the student" << endl;
    cout << "5- Delete the data of the student" << endl;
    cout << "6- To Exit" << endl;

    cout << endl;
    cout << "Enter your choice:";
    cin >> value;
    cout << endl;

    switch(value){
        case 1:
        enter_data();
        break;

        case 2:
        show_data();
        break;

        case 3:
        search_data();
        break;

        case 4:
        update_data();
        break;

        case 5:
        delete_data();
        break;

        case 6:
        exit(0);
    }
    }




    return 0;
}