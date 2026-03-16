//Problem Statement:
// You are given a non-negative integer num. The goal is to compute the smallest
// digit present in this number. Each digit of the number should be considered
// separately to identify the smallest one.

// Write a function smallestDigit(num) that takes a positive integer num as input
// and returns the smallest digit found in it.

// Example:
// Input:
// num = 123

// Output:
// 1


#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int smallestDigit(int num) {
        int smallest = INT_MAX;

        while(num != 0) {
            int digit = num % 10;

            if(digit < smallest) {
                smallest = digit;
            }

            num = num / 10;
        }

        return smallest;
    }
};

int main() {
    Solution obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = obj.smallestDigit(num);

    cout << "Smallest Digit: " << result << endl;

    return 0;
}
