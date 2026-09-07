class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>apl(26,0);
        for(int i=0;i<s.size();i++){
            int index= s[i]-'a';
            apl[index]++;
        }
        for(int i=0;i<s.size();i++){
            int index = s[i] - 'a';
            if(apl[index]==1)
            return i;
        }
        return -1;
    }
};