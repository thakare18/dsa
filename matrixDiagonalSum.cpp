class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //step1: d1 sum 
        int sum = 0;
        int rows = mat.size();
        int cols = mat[0].size();
        int n = mat.size();
        //first loop
        for(int i=0;i<n;i++){
            sum = sum +mat[i][i];
        }        
        for (int i=0;i<n;i++){
            sum= sum+mat[i][n-i-1];
        }
        //step to remove a duplicate element
        if(n&1){
            //if n is odd 
            sum = sum-mat[n/2][n/2];
        }
        return sum;
    }
};