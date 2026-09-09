class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int low = 0;
        int high = rows * cols - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            // We will convert the 1D index into the corresponding row and column.
            int row = mid / cols;
            int col = mid % cols;

            if(matrix[row][col] == target) {
                // We found the target, so we will return true.
                return true;
            }
            else if(matrix[row][col] < target) {
                // The current value is smaller than the target,
                // so we will search in the right half.
                low = mid + 1;
            }
            else {
                // The current value is greater than the target,
                // so we will search in the left half.
                high = mid - 1;
            }
        }

        // The target is not present in the matrix.
        return false;
    }
};