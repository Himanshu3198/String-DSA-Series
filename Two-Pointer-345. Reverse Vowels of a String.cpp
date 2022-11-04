class Solution {
public:
   bool isVowel(char c){
        c=tolower(c);
       return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
   }
    string reverseVowels(string s) {

           int start=0,end=s.size()-1;
           bool foundStart=false,foundEnd=false;
           while(start<=end){
               if(isVowel(s[start]) && isVowel(s[end])){
                   char temp=s[start];
                   s[start]=s[end];
                   s[end]=temp;
                   start++,end--;
                   foundStart=false,foundEnd=false;
                   continue;
               }else if(isVowel(s[start])){
                   foundStart=true;
               }else if(isVowel(s[end])){
                   foundEnd=true;
               }
               if(!foundStart && !foundEnd){
                   start++;
                   end--;
               }else if(foundStart){
                   end--; 
               }else if(foundEnd){
                   start++;
               }
           }
           return s;

    }
};
