#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));                    //Seed the random number generator with current time
    int ran_num = rand() % 100 +1;          //To generate a random number.
    int guess;
    int attempts = 0;
    int max_attempts = 10;

    cout << "===== WELCOME TO GUESSING NUMBER GAME =====" << endl;
    cout << "Enter any number between 1-100" << endl;
    cout << "You Have maximum " << max_attempts << " attempts" << endl;

    while(attempts < max_attempts){
        cout << "Guess the random number:";
        cin >> guess;
        attempts++;

        if(cin.fail()){
            cin.clear();               //clearing the error flags which are set when std::cin fails to interpret the input.
            cin.ignore();              //cin. ignore(), helps in removing the input contents that could caused the read failure.
            cout << "Invalid Output!!!" << endl;
            continue;
        }

    if(guess > ran_num){
        cout << "Too High!" << endl;
    }
    else if(guess < ran_num){
        cout << "Too Low!" << endl;
    }
    else{
        cout << "Congrats! You Guessed the random number correctly." << endl;
         break;
    }
    }
     cout << endl;
     cout << "opps! You are out of attempts!!!..." << endl;
     cout << "The random number was: " << ran_num << endl;



    return 0;
}