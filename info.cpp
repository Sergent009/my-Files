//login and registration system
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool loggIn(){
    string username, password;
    string un,pw;
    cout << "Enter username:" << flush;
    cin >> username;
    cout << "Enter password:" << flush;
    cin >> password;

    ifstream read("data\\" + username + ".txt");   //ifstream-> it is used to read 
    getline(read, un);
    getline(read, pw);                             //information from files.

    if(un == username && pw == password){
        return true;
    }
    else{
        return false;
    }
};

int main() { 
    int choice;
    cout << "1.Register:" << endl;
    cout << "2.login:" << endl;

    cout << "Enter Your Choice:" << flush;
    cin >> choice;
        if(choice == 1){
        string username, password;
        cout << "Select a username:"; cin >> username;
        cout << "Select a password:"; cin >> password;

        ofstream file;
        file.open("data\\" + username + ".txt");
        file << username << endl << password;
        file.close();

        main();
    }

    else if(choice == 2){
        bool status = loggIn();

        if(!status){
            cout << "Failed to login." << endl;
            system("PAUSE");
            return 0;
        }
        else{
            cout << "Successfully Logged In." << endl;
            system("PAUSE");
            return 1;
        }
    };




    
    return 0;
}