/*Bank Management system which includes following functions:
1-amount deposit.
2-amount withdrawl.
3-display.
*/
#include <iostream>
#include <fstream>
using namespace std;

class bankManagement{
    private:
    char name[20], acc_type[20];
    int acc_no, bal;
    ifstream read;

    public:
    bankManagement(){
        cout << "Enter the name:" << endl;
        cin.ignore();
        cin.getline(name, 20);
        cout << "Enter the account type:" << endl;
        cin.getline(acc_type, 20);
        cout << "Enter the account number:" << endl;
        cin >> acc_no;
        cout << "Enter the balance of the account:" << endl;
        cin >> bal;   
    }
    
     void reg() {
        ofstream write("sample file.txt", ios::app);    // Open the file in append mode
        write << "Name: " << name << endl;              //it will not overwrite the file
        write << "Account Type: " << acc_type << endl;  //it will add the details again after the program runs
        write << "Account Number: " << acc_no << endl;
        write << "Balance: " << bal << endl;
        write << endl;
        write.close();
    }

    void readFromFile(){
         read.open("sample file\\" + string(name) + ".txt");
         read.open("sample file\\" + string(acc_type) + ".txt");
         read.open("sample file\\" + to_string(acc_no) + ".txt");
         read.open("sample file\\" + to_string(bal) + ".txt");
    }    

    
void deposit(int amt){
    bal = bal + amt;
    cout << "The Balance after the deposit is:" << bal << endl;
}

void withdrawl(int amt){
    if(amt > bal){
        cout << "Your account capacity is lower than amount you want to withdrawl.";
    }
    else{
        bal = bal - amt;
        cout << "The Balance after withdrawl is:" << bal;
    }
}

void display(){
    cout << "Name is:" << name << endl;
    cout << "account type is:" << acc_type << endl;
    cout << "account number is:" << acc_no << endl;
    cout << "balance of account is" << bal << endl;
}
};

int main(){
    bankManagement sys;
    cout << "========== Bank Of Pakistan ==========" << endl;
    cout << "===== Welcome To Bank Of Pakistan ====";
    cout << endl;
    cout << "1.amount deposit" << endl;
    cout << "2.amount withdrawl" << endl;
    cout << "3.display the info" << endl;
    cout << "4.Quit" << endl;
    
    int choice, amount;
    cout << "Enter your choice:" << endl;
    cin >> choice;

    switch(choice){
        case 1:
        cout << "Enter the amount:";
        cin >> amount;
        sys.deposit(amount);
        break;

        case 2:
        cout << "Enter the amount to withdrawl:";
        cin >> amount;
        sys.withdrawl(amount);
        break;

        case 3:
        sys.display();
        break;

        case 4:
        exit(0);
    }
    sys.reg();
    

    main();
    

    return 0;
}