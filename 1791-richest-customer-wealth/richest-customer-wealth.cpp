class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=INT_MIN, index=-1;
        for(int i=0;i<accounts.size();i++ ){
            int total=0;
            for(int j=0;j<accounts[0].size();j++){
                total+=accounts[i][j];
            }
            if(sum<total){
                sum=total;

            }
        }
        return sum;
        
    }
};