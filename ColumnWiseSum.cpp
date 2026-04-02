// Column Wise Sum in 2D Array

/*
Approach:

1. Fix column (outer loop)
2. Traverse all rows for that column
3. Add values
4. Print sum

Matrix:
2   8   5   10
4   2   5   5
6   4   6   10

Column-wise:
col 0 → sum rows
col 1 → sum rows
...
*/

#include <iostream>
using namespace std;

int main() {

    int arr[3][4] = {
        {2, 8, 5, 10},
        {4, 2, 5, 5},
        {6, 4, 6, 10}
    };

    int rows = 3;
    int cols = 4;

    // Column-wise sum
    for(int j = 0; j < cols; j++) {

        int sum = 0;

        for(int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }

        cout << "Column " << j+1 << " sum = " << sum << endl;
    }

    return 0;
}