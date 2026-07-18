// Love Babbar. Insertion Sort
// LeetCode 912. Sort an Array

/*
Question:

Given an array of integers.

Sort the array in ascending order
using Insertion Sort.

Example:

Input:
arr = [5,2,4,6,1,3]

Output:
[1,2,3,4,5,6]

Explanation:
Take one element at a time
and insert it into its correct
position in the already sorted part.

--------------------------------------------------------

Approach (Insertion Sort)

Step 1:
Assume the first element
is already sorted.

Step 2:
Start from index 1.

Step 3:
Store the current element
in a temporary variable.

Step 4:
Compare it with elements
on the left side.

Step 5:
If left element is greater,
shift it one position to the right.

Step 6:
When the correct position
is found, insert the element there.

Why does this work?

At every iteration,
the left part of the array
remains sorted.

The current element is inserted
at its correct position.

Time Complexity:

Best Case    : O(n)
Average Case : O(n²)
Worst Case   : O(n²)

Space Complexity: O(1)

*/

class Solution {
public:
    void insertionSort(vector<int>& arr) {

        int n = arr.size();

        // Round 1 to n-1
        for(int i = 1; i < n; i++) {

            // Store current element
            int temp = arr[i];

            int j = i - 1;

            // Shift all greater elements one position ahead
            while(j >= 0 && arr[j] > temp) {

                // Shift
                arr[j + 1] = arr[j];

                j--;
            }

            // Place current element at correct position
            arr[j + 1] = temp;
        }
    }
};