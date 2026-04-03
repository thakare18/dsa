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