// Question: Search for an Element in a Sorted Array using Binary Search
//
// Given a sorted array arr and a target value.
// Find the index of target in arr.
// If the target exists, return its index.
// If the target does not exist, return -1.
//
// Binary Search is an efficient searching algorithm.
// It works only on sorted arrays.
//
// Approach:
// 1. Take two pointers:
//    s = 0 (start)
//    e = n-1 (end)
//
// 2. Find middle element:
//    mid = (s + e) / 2
//
// 3. If arr[mid] == target
//    return mid
//
// 4. If target < arr[mid]
//    search in left half
//    e = mid - 1
//
// 5. Else
//    search in right half
//    s = mid + 1
//
// 6. If loop ends,
//    target is not present
//    return -1
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& arr, int target) {

        int n = arr.size();

        int s = 0;
        int e = n - 1;

        while(s <= e) {

            // Step 1: Find Mid
            int mid = s + (e - s) / 2; // To avoid overflow, we use s + (e - s) / 2 instead of (s + e) / 2

            // Step 2: Check Mid
            if(arr[mid] == target) {
                return mid;
            }

            // Step 3: Go Left
            if(target < arr[mid]) {
                e = mid - 1;
            }

            // Step 4: Go Right
            else {
                s = mid + 1;
            }
        }

        // Target not found
        return -1;
    }
};

int main() {

    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    Solution obj;

    int ans = obj.binarySearch(arr, target);

    cout << "Index = " << ans << endl;

    return 0;
}