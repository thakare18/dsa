

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n = matrix.size();

        // Smallest possible value
        int low = matrix[0][0];

        // Largest possible value
        int high = matrix[n - 1][n - 1];

        // Binary search on the answer
        while(low < high) {

            int mid = low + (high - low) / 2;

            // Count elements <= mid
            int count = 0;

            // Check every row
            for(int i = 0; i < n; i++) {

                // upper_bound gives the first element
                // greater than mid.
                //
                // Its position tells us how many
                // elements are <= mid.
                count += upper_bound(
                    matrix[i].begin(),
                    matrix[i].end(),
                    mid
                ) - matrix[i].begin();
            }

            // If fewer than k elements are <= mid,
            // we need a bigger answer.
            if(count < k) {
                low = mid + 1;
            }

            // If count >= k,
            // mid can be our answer.
            else {
                high = mid;
            }
        }

        // low == high
        // This is the kth smallest element.
        return low;
    }
};

int main() {

    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };

    int k = 8;

    Solution obj;

    cout << "Kth Smallest Element: "
         << obj.kthSmallest(matrix, k);

    return 0;
}