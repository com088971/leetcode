class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int first = 0, sec = 0;
        int i = 0;
        while (i < mat.size()) {
            first += mat[i][i];
            i++;
        }
        i = 0;
        int j = mat[0].size()-1;
        while (i < mat.size()) {
            sec += mat[i][j];
            i++, j--;
        }
        int n=mat.size();
        int sum=0;
        if(n%2==1){
            sum=mat[n/2][n/2];

        }
        return first + sec - sum;
    }
};