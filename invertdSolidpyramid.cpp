#include <iostream>
using namespace std;

int main() {
   int n=5; // no for rows
   // print some spaces first row -1
   // print some stars [2*n]-[2*row-1]

   for (int row =1; row<=n; row++){
    // for to print some stars
    for (int col=1; col<=(row-1);col++){
        cout << " ";
    }
    //for stars
    for(int col=1; col<=(2*n)-(2*row-1); col++){
        cout << "*";
    }
    cout << endl;
   }
}
