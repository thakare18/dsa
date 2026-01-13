#include <iostream>
using namespace std;

int main() {

    int n = 3;  // or get input from user
    for(int row = 1 ; row <= n ; row++)
    {
       for (int col = 1; col <= n; col++){
        cout << "*";
       }
       cout << endl;
    }
  
}
// This code prints a square pattern of asterisks of size n x n. For n = 3