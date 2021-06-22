
// 395. Longest Substring with At Least K Repeating Characters

class Solution {
public:
    
    int solve(string s,int start,int end,int k){
        if(end-start<k) return 0;
        
        
        vector<int>freq(26,0);
        
        for(int i=start;i<end;i++){
            
            freq[s[i]-'a']++;
        }
        
        for(int i=start;i<end;i++){
            
            if(freq[s[i]-'a']<k){
                
                
                int j=i+1;
                
                while(j<end and freq[s[j]-'a']<k){
                    j++;
                }
                
                return max(solve(s,start,i,k),solve(s,j,end,k));
            }
        }
        
        return end-start;
    }
    int longestSubstring(string s, int k) {
    
          if(k>s.length()) return 0;
          return solve(s,0,s.length(),k);
        
    }
    };
