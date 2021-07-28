// 1370. Increasing Decreasing String

class Solution {
public:
    string sortString(string s) {
        
        
        vector<int>freq(26,0);
        
        string res;
        
        for(char it:s){
            freq[it-'a']++;
        }
        
        while(1){
            
            for(int i=0;i<26;i++){
                
                if(freq[i]-->0){
                    res.push_back(i+'a');
                }
            }
            
            for(int i=25;i>=0;i--){
                
                if(freq[i]-->0){
                    res.push_back(i+'a');
                }
            }
            
            if(s.length()==res.length()) break;
            
        }
        
        return res;
    }
};
