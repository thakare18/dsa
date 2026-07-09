// LeetCode 74. Search a 2D Matrix

/*
Question:

You are given an m x n matrix with the following properties:

1. Each row is sorted in ascending order.
2. The first integer of each row is greater than
   the last integer of the previous row.

Given an integer target, return true if target exists
in the matrix, otherwise return false.

Example 1:
Input:
matrix = [[1,3,5,7],
          [10,11,16,20],
          [23,30,34,60]]
target = 3

Output:
true

Example 2:
Input:
matrix = [[1,3,5,7],
          [10,11,16,20],
          [23,30,34,60]]
target = 13

Output:
false

Approach:

Treat the entire matrix as a single sorted array.

Total Elements = rows * cols

Binary Search:
1. Find mid.
2. Convert mid into row and column.
3. Compare with target.
4. Move left or right accordingly.

Formula:

rowIndex = mid / cols
colIndex = mid % cols

Time Complexity : O(log(rows * cols))
Space Complexity: O(1)
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int total = rows * cols;

        int s = 0;
        int e = total - 1;

        while(s <= e) {

            int mid = (s + e) / 2;

            // convert mid into rowIndex and colIndex
            int rowIndex = mid / cols;
            int colIndex = mid % cols;

            // target found
            if(matrix[rowIndex][colIndex] == target) {
                return true;
            }

            // move right
            if(target > matrix[rowIndex][colIndex]) {
                s = mid + 1;
            }
            else {

                // move left
                e = mid - 1;
            }
        }

        return false;
    }
};