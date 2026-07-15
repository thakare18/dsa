// Love Babbar. Bubble Sort (Optimized using Swapped Flag)
// LeetCode 912. Sort an Array
/*
Question:

Given an array of integers.

Sort the array in ascending order
using Bubble Sort.

Example:

Input:
arr = [5,1,4,2,8]

Output:
[1,2,4,5,8]

Explanation:
Repeatedly compare adjacent elements
and swap them if they are in the wrong order.

--------------------------------------------------------

Approach (Bubble Sort)

Step 1:
Run n-1 rounds.

Step 2:
Compare adjacent elements.

Step 3:
If left element is greater,
swap both elements.

Step 4:
After every round,
the largest element reaches
its correct position.

Step 5:
Use a 'swapped' flag.

If no swapping happens in a round,
the array is already sorted,
so stop the algorithm.

Why does this work?

In every round,
the largest unsorted element
moves to the end.

Using the swapped flag
avoids unnecessary rounds
for an already sorted array.

Time Complexity:

Best Case    : O(n)
Average Case : O(n²)
Worst Case   : O(n²)

Space Complexity: O(1)

*/

class Solution {
public:

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();

        // Total rounds = n - 1
        for(int i = 1; i < n; i++) {

            // Assume no swapping in this round
            bool swapped = false;

            // Compare adjacent elements
            // Last i elements are already sorted
            for(int j = 0; j < n - i; j++) {

                // Swap if left element is greater
                if(nums[j] > nums[j + 1]) {

                    swap(nums[j], nums[j + 1]);

                    // At least one swap happened
                    swapped = true;
                }
            }

            // If no swapping happened,
            // array is already sorted
            if(swapped == false)
                break;
        }

        return nums;
    }
};