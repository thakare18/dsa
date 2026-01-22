#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int row = 1; row <=n; row++){
        // for sapces 
        for (int col=1 ; col<=(n-row); col++){
            cout << " ";
        } 
        // for stars
        for (int col=1; col<=(2*row -1); col++){
            cout << "*";
        }
        cout << endl;
    }
}
