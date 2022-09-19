
class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int res=1,n=s.size(),count=1;
        for(int i=1;i<n;i++){
            
            int y=s[i]-'a';
            int x=s[i-1]-'a';
            if((y-x)==1) count++;
            else count=1;
            res=max(res,count);
    
        }
        return res;
    }
};
