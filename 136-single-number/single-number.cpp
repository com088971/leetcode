class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
       for(int &p:nums){
        ans=ans^p;
       }
       return ans;
    }
};