// File Name: ReverseVector.cpp

// 226. Reverse a Vector
// Given an array, return the array with elements in reverse order.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> reverseArray(const vector<int>& arr) {

        vector<int> num = arr;
        int n = num.size();

        int i = 0;
        int j = n - 1;

        while(i < j) {
            swap(num[i], num[j]);
            i++;
            j--;
        }

        return num;
    }
};

int main() {
    vector<int> arr = {10, 20, 30, 40};

    Solution obj;
    vector<int> result = obj.reverseArray(arr);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}