// File Name: FindUniqueElement.cpp

// 437. Find the Unique Element in an Array
// Every element appears twice except one. Find that unique element.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findUniqueElement(vector<int>& nums) {

        int ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {2, 3, 5, 3, 2};

    Solution obj;
    cout << obj.findUniqueElement(nums);

    return 0;
}