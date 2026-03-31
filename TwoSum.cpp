// Two Sum Problem
// Return indices of two numbers such that they add up to target

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        // finding pairs
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                int sum = nums[i] + nums[j];

                if(sum == target) {
                    return {i, j};
                }
            }
        }

        return {};   // ✅ inside function
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    cout << result[0] << " " << result[1];

    return 0;
}