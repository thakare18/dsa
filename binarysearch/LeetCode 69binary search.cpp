// LeetCode 69. Sqrt(x)

/*
Question:

Given a non-negative integer x, return the square root of x
rounded down to the nearest integer.

The returned integer should be non-negative.

You must not use any built-in exponent function or operator.

Example 1:
Input: x = 4
Output: 2

Example 2:
Input: x = 8
Output: 2

Explanation:
Square root of 8 is 2.828...
Floor value is 2.

Approach:

1. Apply Binary Search on numbers from 0 to x.
2. Calculate mid.
3. If mid * mid == x, return mid.
4. If mid * mid > x, move left.
5. Otherwise, store mid as possible answer and move right.
6. Use long long to avoid integer overflow.

Time Complexity: O(log x)
Space Complexity: O(1)
*/

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

            // move left
            if(product > target) {
                e = mid - 1;
            }

            // move right
            if(product < target) {

                // store current answer
                ans = mid;

                s = mid + 1;
            }
        }

        return ans;
    }
};