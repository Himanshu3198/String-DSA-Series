class Solution {
public:
    int minDeletions(string s) {
        
        vector<int>freq(26,0);
        for(char c:s) freq[c-'a']++;
        set<int>st;
        int res=0;
        for(int i=0;i<26;i++){
            if(freq[i]==0) continue;
            if(!st.count(freq[i])){
                st.insert(freq[i]); 
            }else{
                
                while(st.count(freq[i])){
                    res++;
                    freq[i]--;   
                }
                if(freq[i]!=0)
                st.insert(freq[i]);
            }
        }
        return res;
    }
};
