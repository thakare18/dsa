#include <iostream>
using namespace std;

int main() {
    //loic : first and last row me sare stars print karne hai n*
    // middle  row mai : 1* (n-2) spaces 1*
    // outter loop for rows
    int n = 5;
    for(int row = 1; row <= n ; row++){

        if(row ==1 || row==n){
            for(int col=1 ; col<=n ; col++){
                cout<< "* ";
            }


        }
        else{
            cout<< "* ";
            for( int col=1 ; col<=(n-2); col++){
                cout<< "  ";
            }
            cout<< "* ";
            
        }
        cout<< endl;
    }
  
}
