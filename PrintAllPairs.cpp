// Print all possible pairs in an array
// For every element, pair it with every other element

// #include <iostream>
// #include <vector>
// using namespace std;

// void printPairs(vector<int>& arr) {

//     int n = arr.size();

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {

//             cout << "(" << arr[i] << ", " << arr[j] << ") ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
#include <vector>

using namespace std;

void printPairs(vector<int>& arr) {

    // Get the size of the array
    int n = arr.size();

    // Iterate through the array using two nested loops

    for(int i= 0; i < n; i++) {
        for(int  j=0; j < n; j++) {
            // Print the pair (arr[i], arr[j])
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
}




int main() {
    vector<int> arr = {10, 20, 30, 40};

    printPairs(arr);

    return 0;
}