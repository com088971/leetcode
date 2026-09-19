class Solution {
public:
       int kandensmax(vector<int>&nums,int n){
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum=max(sum+nums[i],nums[i]);
            maxi=max(maxi,sum);
        }
        return maxi;
       }
       int kandensmin(vector<int>&nums,int n){
        int sum=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
          sum=min(sum+nums[i],nums[i]);
            mini=min(mini,sum);
        }
        return mini;
       }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int total= accumulate(nums.begin(), nums.end(), 0);
        int minsum= kandensmin(nums,n);
          int maxsum= kandensmax(nums,n);
          int circularsum= total - minsum;
          if(maxsum>0) return max(maxsum,circularsum);

          return maxsum;
    }
};