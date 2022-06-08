class Solution {
public:
     int isPalin(string &s,int i,int j){
            if(i>j) return 1;
            if(s[i]!=s[j]) return 0;
            return isPalin(s,i+1,j-1);
     }
    int removePalindromeSub(string s) {
          if(isPalin(s,0,s.size()-1)) return 1;
          return 2;
    }
};
