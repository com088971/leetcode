class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool>allo(26,false);
        for(int i=0;i<allowed.size();i++){
            allo[allowed[i]-'a']=true;
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            bool consistent= true;
            for(int j=0;j<words[i].size();j++){
                if(allo[words[i][j]-'a']==false){
                    consistent=false;
                    break;
                }
            }
             if(consistent)
             ans++;
        }
           return ans;
    }
};