class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,char>mp;
        char alpha='a';
        for(auto &c:key){
            if(isalpha(c)){
            if(!mp.count(c)){
                mp[c]=alpha;
                alpha++;
            } 
            }
        }
        
        // for(auto it:mp) cout<<it.first<<" "<<it.second<<"\n";
        string ans="";
        for(auto &c:message){
            
            if(isalpha(c)){
             ans+=mp[c];
            }else{
                ans+=c;
            }
        }
        return ans;
    }
};
