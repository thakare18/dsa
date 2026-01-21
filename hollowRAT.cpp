#include <iostream>
using namespace std;

int main() {
   int n = 5;
   for (int row = 1; row<= n; row++){
    //for each row we have different logic 
    // for for 1 row 2 and row n we print full star
    if(row ==1 || row ==2 || row == n){
        // no space here only stars
        for (int col=1; col<=row; col++){
            cout << "* ";

        }
    }
    else{
        //middle rows
        // 1* somes spaces 1*
        cout << "* ";
        // for some spaces
        for (int col=1; col<=row-2; col++){
            cout << "  ";
        }
        cout << "* ";
    }
    cout << endl;
   }
}
