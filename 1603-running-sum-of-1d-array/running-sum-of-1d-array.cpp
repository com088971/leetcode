class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>a;
        int sum=0;
        for(int &s: nums){
            sum+=s;
            a.push_back(sum);
        }
    //    for(int i=0;i<nums.size();i++){
    //      sum+=nums[i];
    //       a.push_back(sum);

    //    }
       return a;
    }
};