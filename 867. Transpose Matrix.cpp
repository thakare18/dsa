class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();
        //how to solve *original matrix => rows*cols
        //=> transpose matrix => cols*rows
        vector<vector<int> > transpose(cols, vector<int>(rows,0));

        //loops for transpose to create 
         for (int i=0;i<cols;i++){
            for(int j=0;j<rows;j++){
                transpose[i][j]=matrix[j][i];
            }
         }
         return transpose;
        
    }
};




// Transpose of a Matrix
// Row becomes column and column becomes row

#include <vector>
using namespace std;

// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {

//         // number of rows in original matrix
//         int rowsInOriginalArray = matrix.size();

//         // number of columns in original matrix
//         int colsInOriginalArray = matrix[0].size();

//         // transpose:
//         // rows -> columns
//         // columns -> rows
//         int rowsOfTransposeMatrix = colsInOriginalArray;
//         int colsOfTransposeMatrix = rowsInOriginalArray;

//         // create transpose matrix with swapped dimensions
//         vector<vector<int>> transpose(
//             rowsOfTransposeMatrix,
//             vector<int>(colsOfTransposeMatrix, 0)
//         );

//         // logic: i,j -> j,i
//         for(int i = 0; i < rowsOfTransposeMatrix; i++) {
//             for(int j = 0; j < colsOfTransposeMatrix; j++) {

//                 // swap row and column index
//                 transpose[i][j] = matrix[j][i];
//             }
//         }

//         return transpose;
//     }
// };