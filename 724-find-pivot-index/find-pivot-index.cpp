class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        for( int &p : nums){
            totalsum+=p;
        }
          int cs=0;
          for(int i=0;i<nums.size();i++){
            int ls=cs;
            int rs= totalsum-ls-nums[i];
            if(ls==rs)
            return i;
            else
            cs+=nums[i];
          }
          return -1;
        
    }
};