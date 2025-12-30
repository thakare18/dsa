#include <iostream>
using namespace std;

void EvenOdd(int num){
    if (num%2 ==0) {
    cout<< "The number is Even" <<endl;
    }
    else{
        cout<< "The number is odd" <<endl;
    }
}

// check the number is positive or negative

void Checknumberpositiveornegative(int num){
    if (num > 0){
        cout<< "The number is positive" <<endl;
    
    }
    else if(num<0){
        cout<< "the number is negative" <<endl;
    }
    else{
        cout<< "the number is zero" <<endl;
    }

}


//print the average number of three numbers

int printAvg(int a,int b, int c){
    int avg = (a+b+c)/3;
    // cout<<  "The avg is " << avg << endl;
    return avg;
}


int main() {
    // PrintThakare();
    // Checknumberpositiveornegative(0);
   int answer =  printAvg(10,20,30);
    cout<< "The avg is " << answer << endl;

    // EvenOdd(2
    return 0;
}
