438. Find All Anagrams in a String

class Solution {
public:
    
    
    bool isAnagram(string s,string t){
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
    vector<int> findAnagrams(string s, string p) {
        
     int n = p.size();
    unordered_map<char, int> m;
    for(auto i : p)
        m[i]++;
    
    unordered_map<char, int> tm = m;
    vector<int> ans;
    
    int i = 0;
    for(int j = 0; j < s.size(); j++)
    {
        if(m.find(s[j]) == m.end())
        {
            m = tm, i = j + 1;
            continue;
        }
        
        if(m[s[j]] == 0)
        {
            m[s[i++]]++;
            j--;
            continue;
        }
        
        m[s[j]]--;
            
        if(j - i + 1 == n)
            ans.push_back(i);            
    }
    
    return ans;
}
    
};
