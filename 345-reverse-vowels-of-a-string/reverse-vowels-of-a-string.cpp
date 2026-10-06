class Solution {
public:
          bool isvowel(char c){
          return c == 'a' || c == 'e' || c == 'i' || 
               c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || 
               c == 'O' || c == 'U';
          }
    string reverseVowels(string s) {
        int start=0,end=s.size()-1;
          
           while(start<=end){
            if(!isvowel(s[start])) start++; 
            else if(!isvowel(s[end])) end--;
            else {
                swap(s[start],s[end]);
                start++,end--;
            }

        }
        return s;
    }
};