class Solution {
public:
     
    int canBeTypedWords(string text, string brokenLetters) {
         
        stringstream ss(text);
        vector<string>arr;
        string words;
        while(ss >>words){
            arr.push_back(words);
        }
      
        vector<int>allo(26,0);
        for(int i=0;i<brokenLetters.size();i++){
            allo[brokenLetters[i]-'a']=1;
        }
         int count=0;
        for(int i=0;i<arr.size();i++){
            bool choosen=true;
            for(int j=0;j<arr[i].size();j++){
                if(allo[arr[i][j]-'a']==1){
                     choosen=false;
                    break;

                }
            }
            if(choosen)
            count++;
            

        }
        return count;
        
    

        
    }
};