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

    ifstream read("sample file\\" + username + ".txt");   //ifstream-> it is used to read 
    getline(read, un);
    getline(read, pw);                             //information from files.

    if(un == username && pw == password){
        return true;
    }
    else{
        return false;
    }
};

void reg_user(string username, string password){
        ofstream file;                // For persistant storage, we ae writing to file.
        file.open("sample file\\" + username + ".txt");
        file << username << endl << password;
        file.close();
}
int main() { 
    int n = 10;  //no of users.
    string usernames[n]; 
    int count_users =0; //no.of users registered.

    int choice;
    cout << "1.Register:" << endl;
    cout << "2.login:" << endl;

    cout << "Enter Your Choice:" << flush;
    cin >> choice;
        if(choice == 1){
            if(count_users >= n){
                cout << "Maximun limit of user has reached!" << endl;
                system("PAUSE");
                return 0;
            }

        string username, password;
        cout << "Select a username:"; cin >> username;
        cout << "Select a password:"; cin >> password;

        for(int i=0; i<count_users; i++){
            if(usernames[i] == username){
                cout << "Name already exists" << endl;
                system("PAUSE");
                return 0;
            }
        }
        usernames[count_users] = username;
        count_users++;

        reg_user(username, password);

        
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
            main();        //recursive function.
            return 1;
        }
    };
    main();




    
    return 0;
}