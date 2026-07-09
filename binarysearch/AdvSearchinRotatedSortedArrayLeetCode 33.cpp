// LeetCode 33. Search in Rotated Sorted Array

/*
Question:

There is an integer array nums sorted in ascending order.

Before searching, the array may have been rotated
at some unknown pivot.

Example:
Original:
[0,1,2,4,5,6,7]

Rotated:
[4,5,6,7,0,1,2]

Given the rotated array and a target,
return its index if found.
Otherwise return -1.

Examples:

Input:
nums = [4,5,6,7,0,1,2]
target = 0

Output:
4

Input:
nums = [4,5,6,7,0,1,2]
target = 3

Output:
-1

Approach:

Step 1:
Find the pivot index using Binary Search.

Step 2:
Check in which sorted half the target lies.

Step 3:
Apply Binary Search on that half only.

Time Complexity : O(log n)
Space Complexity: O(1)
*/

class Solution {
public:

    int findPivotIndex(vector<int>& nums) {

        int n = nums.size();

        int s = 0;
        int e = n - 1;

        while(s <= e) {

            int mid = s + (e - s) / 2;

            // only one element left
            if(s == e) {
                return mid;
            }

            // mid is pivot
            if(mid + 1 < n && nums[mid] > nums[mid + 1]) {
                return mid;
            }

            // pivot lies in left half
            if(nums[mid] < nums[s]) {
                e = mid - 1;
            }
            else {

                // pivot lies in right half
                s = mid + 1;
            }
        }

        // array is not rotated
        return n - 1;
    }

    int binarySearch(int s, int e, vector<int>& nums, int target) {

        while(s <= e) {

            int mid = s + (e - s) / 2;

            if(nums[mid] == target) {
                return mid;
            }

            if(target > nums[mid]) {

                // move right
                s = mid + 1;
            }
            else {

                // move left
                e = mid - 1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {

        int pivotIndex = findPivotIndex(nums);

        int n = nums.size();

        // target lies in first sorted half
        if(target >= nums[0] && target <= nums[pivotIndex]) {
            return binarySearch(0, pivotIndex, nums, target);
        }
        else {

            // target lies in second sorted half
            return binarySearch(pivotIndex + 1, n - 1, nums, target);
        }
    }
};