#include <iostream>
using namespace std;

int main() {
    int n= 5;
    for (int row = 1 ; row<=n ; row++ ){
//har ek row ke liye har ek column me star print karna hai
        for ( int col=1 ; col<=row; col++ ){
            cout<< "* ";
        }
        cout << endl;
    }
    
}
