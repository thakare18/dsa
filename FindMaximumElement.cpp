// File Name: FindMaximumElement.cpp

// 435. Find the Maximum Element in an Array
// Return the maximum element in the array.

#include <iostream>
#include <vector>
using namespace std;

int findMaximum(vector<int>& arr) {
    int maxi = arr[0];

    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main() {
    vector<int> arr = {4, 2, 7, 1, 9, 3};

    cout << findMaximum(arr);

    return 0;
}