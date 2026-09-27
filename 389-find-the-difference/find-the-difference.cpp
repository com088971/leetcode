class Solution {
public:
    char findTheDifference(string s, string t) {
         char ans=0;
         for( char ch : s)
         ans=ans^ch;
         for(char ce:t)
         ans=ans^ce;

         return ans;


    }
};