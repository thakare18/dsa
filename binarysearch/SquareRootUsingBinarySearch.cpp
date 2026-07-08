// Find Square Root using Binary Search
//
// Given a non-negative integer x,
// return the integer part of its square root.
//
// Example:
// Input : 16
// Output: 4
//
// Input : 10
// Output: 3
//
// Approach:
//
// Apply Binary Search on numbers from 0 to x.
//
// If mid * mid == target
//      return mid
//
// If mid * mid > target
//      move left
//
// Else
//      store current answer
//      move right
//
// Note:
// Use long long to avoid integer overflow.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int mySqrt(int x) {

        int target = x;

        // define search space
        int s = 0;
        int e = target;

        int ans = -1;

        while(s <= e) {

            long long mid = s + (e - s) / 2;
            long long product = mid * mid;

            // check mid
            if(product == target) {
                return mid;
            }

            // left
            if(product > target) {
                e = mid - 1;
            }

            // right
            if(product < target) {

                // store and compute
                ans = mid;

                // move right
                s = mid + 1;
            }
        }

        return ans;
    }
};