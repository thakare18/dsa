// File Name: CountZerosAndOnes.cpp

// 436. Count the Number of Zeros and Ones in an Array
// Given an array containing only 0s and 1s, return count of zeros and ones.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    pair<int, int> countZerosAndOnes(const vector<int>& nums) {

        int totalZeros = 0;
        int totalOnes = 0;
        int size = nums.size();

        for(int i = 0; i < size; i++) {

            if(nums[i] == 0) {
                totalZeros++;
            }

            if(nums[i] == 1) {
                totalOnes++;
            }
        }

        return {totalZeros, totalOnes};
    }
};

int main() {
    vector<int> nums = {0, 0, 0, 0, 1, 0, 1, 0};

    Solution obj;
    pair<int, int> result = obj.countZerosAndOnes(nums);

    cout << "Zeros: " << result.first << endl;
    cout << "Ones: " << result.second << endl;

    return 0;
}