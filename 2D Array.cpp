#include <iostream>
using namespace std;

int main(){
  /*  int a, b;
    cout << "Enter the no.of elements of a:";
    cin >> a;
    cout << "Enter the no.of elements of b:";
    cin >> b;

    int array[a][b];

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> array[i][j];
        }
    }

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int x;
    cin >> x;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(array[i][j] == x){
                cout << i << " " << j << endl;
            }
        }
    }
    */

   int x, y;
   cin >> x;
   cin >> y;
   int arr[x][y];

   for(int i=0; i<x; i++){
    for(int j=0; j<y; j++){
        cin >> arr[i][j];
    }
   }

   //For Spiral order print:
   int col_start=0, col_end=y-1;
   int row_start=0, row_end=x-1;

   for(int col=col_start; col<=col_end; col++){
    cout << arr[row_start][col] << " ";
   }
   row_start++;

   for(int row=row_start; row<=row_end; row++){
    cout << arr[row][col_end] << " ";
   }
   col_end--;

   for(int col=col_end; col>=col_start; col--){
    cout << arr[row_end][col] << " ";
   }
   row_end--;

   for(int row=row_end; row>=row_start; row--){
    cout << arr[row][col_start] << " ";
   }
   col_start++;


    return 0;
}