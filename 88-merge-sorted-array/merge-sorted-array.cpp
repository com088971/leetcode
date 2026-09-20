class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int totalno_ele=m+n;
        vector<int>ans;
        int i=0, j=m;
        int k=0, l=n;
        while(i<j && k<l){
            if(nums1[i]<nums2[k]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[k]);
                k++;
            }
        }
         while(i<j){
                ans.push_back(nums1[i]);
                i++;
             }
             while(k<l){
                ans.push_back(nums2[k]);
                k++;
             }
        
             for(int i=0;i<totalno_ele;i++){
                nums1[i]=ans[i];
             }    
        }
     
        
    
};