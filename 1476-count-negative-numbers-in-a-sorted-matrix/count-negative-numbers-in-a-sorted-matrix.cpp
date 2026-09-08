class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
//binary search new
        int rows = grid.size();
        int cols = grid[0].size();

        int answer = 0;

        for(int i = 0; i < rows; i++) {

            int low = 0;
            int high = cols - 1;

            // Find the first negative number in this row
            while(low <= high) {

                int mid = low + (high - low) / 2;

                if(grid[i][mid] < 0) {
                    // Negative found, but there may be
                    // another negative on the left
                    high = mid - 1;
                }
                else {
                    // Current value is non-negative,
                    // so negative values must be on the right
                    low = mid + 1;
                }
            }

            // All elements from low to cols-1 are negative
            answer += cols - low;
        }

        return answer;
    }
};