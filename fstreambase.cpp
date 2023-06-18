#include <iostream>
#include <fstream>

using namespace std;

int main(){
    /*string name = "Abdul Mannan Khan";
    //opening a file using constructor aand writing it.
    ofstream out("sample file.txt");
    out << name;
*/

    
     string Name;
    //opening a file using constructor aand reading it.
    ifstream in("sample file 2.txt");
    //in >> Name;
    getline(in, Name);
    cout << Name;


    
    return 0;
}