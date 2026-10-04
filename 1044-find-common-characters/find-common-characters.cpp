class Solution {
public:
        void fillcount(string &word,int freq[26]){
              for(char ch:word){
                freq[ch-'a']++;
              }
        }
    vector<string> commonChars(vector<string>& words) {
        vector<string>result;
        int freq[26]={};
        int n=words.size();
        fillcount(words[0],freq);
        for(int i=1;i<n;i++){
            int temp[26]={0};
            fillcount(words[i],temp);
        
        for(int j=0;j<26;j++){
            freq[j]=min(freq[j],temp[j]);


        }
        }
        for(int i=0;i<26;i++){
            int c=freq[i];
            while(freq[i]--){
                result.push_back(string(1,i+'a'));
            }
        }
           return result;

    }
};