class Solution {
public:
     void permut(vector<int> nums, vector<vector<int>>&ans,vector<bool>vistednode,vector<int>temp){
        if(vistednode.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<vistednode.size();i++){
            if(vistednode[i]==0){
                vistednode[i]=1;
                temp.push_back(nums[i]);
                permut(nums,ans,vistednode,temp);
                vistednode[i]=0;
                temp.pop_back();
            }
        }



     }
    vector<vector<int>> permute(vector<int>& nums) {
          vector<vector<int>>ans;
          vector<int>temp;
          vector<bool>vistednode(nums.size(),0);
          permut(nums,ans,vistednode,temp);
          return ans;

        
        
    }
};