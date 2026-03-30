// 439. Sort an Array of 0s and 1s
// Sort the array so that all 0s come before 1s.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        while(left < right) {

            if(nums[left] == 0) {
                left++;
            }
            else if(nums[right] == 1) {
                right--;
            }
            else {
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {1, 0, 1, 0, 1, 0};

    Solution obj;
    vector<int> result = obj.sortArray(nums);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}