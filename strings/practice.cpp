#include<iostream>
#include<cstring>
using namespace std;

// int main(){
//     char arr[50];
//     //to include space inside the input string then we are use a .getline(_arr.name,arr.size,delimeter)
//     cin.getline(arr,50,'X');
//     cout<<arr;
// }

int getLength(char arr[], int size) {
    int count = 0;

    while (arr[count] != '\0'){
        count++;
    }
    return count;
}



int main() {
    char arr[50];
    cout << "Enter a value: " << endl;
    cin >> arr;

    cout << "Length of array is: " << getLength(arr, 50) << endl;
    cout << strlen(arr) << endl; // this is a built-in function to find the length of the string

    return 0;


}


// void  convertUCtoLC(char int  arr[], int size){
//     for (int i = 0; i < size; i++){
//         // if already in lower case then then ignore
//         // if in upper case then convert it to lower case

//         if(arr[i] >= 'A' && arr[i] <= 'Z'){
//          arr[i] = arr[i] - 'A' + 'a';
//         }

//     }
// }


bool palindrome(int arr[], int size) {

int s = 0;
int e = size - 1;

while (s <= e){
    if (arr[s] != arr[e]){
        return false;
    }
    else {
        s++;
        e--;
    }
}
return true; // if the loop is completed then it means saare characters match ho gaye
}

bool ans = palindrome(arr, 50);

cout << "Is the string a palindrome? " << ans << endl;