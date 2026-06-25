// Question: Given a sorted array nums and a target value,
// find the starting and ending position of the target.
//
// If target is not present, return {-1, -1}.
//
// Example:
// nums = [5,7,7,8,8,10], target = 8
// Output = [3,4]
//
// Approach:
// 1. Use Binary Search to find First Occurrence.
// 2. Use Binary Search to find Last Occurrence.
// 3. Return both indices.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    // Find First Occurrence
    int firstOccurrence(vector<int>& nums, int target) {

        int n = nums.size();

        int s = 0;
        int e = n - 1;
        int ans = -1;

        while(s <= e) {

            int mid = s + (e - s) / 2;

            if(nums[mid] == target) {

                // store answer
                ans = mid;

                // search on left side
                e = mid - 1;
            }
            else if(target < nums[mid]) {

                // go left
                e = mid - 1;
            }
            else {

                // go right
                s = mid + 1;
            }
        }

        return ans;
    }

    // Find Last Occurrence
    int lastOccurrence(vector<int>& nums, int target) {

        int n = nums.size();

        int s = 0;
        int e = n - 1;
        int ans = -1;

        while(s <= e) {

            int mid = s + (e - s) / 2;

            if(nums[mid] == target) {

                // store answer
                ans = mid;

                // search on right side
                s = mid + 1;
            }
            else if(target < nums[mid]) {

                // go left
                e = mid - 1;
            }
            else {

                // go right
                s = mid + 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int first = firstOccurrence(nums, target);
        int last = lastOccurrence(nums, target);

        return {first, last};
    }
};

int main() {

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    Solution obj;

    vector<int> ans = obj.searchRange(nums, target);

    cout << "First Occurrence: " << ans[0] << endl;
    cout << "Last Occurrence: " << ans[1] << endl;

    return 0;
}