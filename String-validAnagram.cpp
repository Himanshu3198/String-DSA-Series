
242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        vector<int>count(26,0);
        
        int n=s.length();
        int m=t.length();
        
        if(n!=m){
            return false;
        }
        
        
        for(int i=0;i<max(n,m);i++){
            
            
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        
        
        for(int i=0;i<26;i++){
            
            
            if(count[i]>=1){
                return false;
            }
        }
        return true;
    }
};
