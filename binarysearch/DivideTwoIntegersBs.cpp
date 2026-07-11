// LeetCode 29. Divide Two Integers

/*
Question:

Given two integers dividend and divisor,
return the quotient after dividing dividend by divisor.

Do NOT use:
1. Division (/)
2. Multiplication (*)
3. Modulus (%)

Return only the integer quotient
(truncate towards zero).

If divisor == 0, return INT_MAX.

Examples:

Input:
dividend = 10
divisor = 3

Output:
3

Explanation:
10 / 3 = 3.333...
Answer = 3

Input:
dividend = 7
divisor = -3

Output:
-2

Approach:

Step 1:
Take absolute value of both numbers.

Step 2:
Apply Binary Search on quotient.

Step 3:
For every mid,
check if

divisor * mid == dividend

If yes,
return mid.

If product is greater,
move left.

Otherwise,
store answer and move right.

Step 4:
Finally apply sign.

Time Complexity : O(log dividend)
Space Complexity: O(1)
*/

#include <climits>
using namespace std;

class Solution {
public:

    long long solve(long long dividend, long long divisor) {

        long long s = 0;
        long long e = dividend;

        long long ans = -1;

        while(s <= e) {

            long long mid = s + ((e - s) >> 1);

            long long product = divisor * mid;

            if(product == dividend) {
                return mid;
            }
            else if(product > dividend) {

                // move left
                e = mid - 1;
            }
            else {

                // store answer
                ans = mid;

                // move right
                s = mid + 1;
            }
        }

        return ans;
    }

    int divide(int dividend, int divisor) {

        if(divisor == 0)
            return INT_MAX;

        long long ans = solve(
            abs((long long)dividend),
            abs((long long)divisor)
        );

        // apply sign
        if((dividend >= 0 && divisor >= 0) ||
           (dividend < 0 && divisor < 0))
            return (int)ans;

        return (int)(-ans);
    }
};