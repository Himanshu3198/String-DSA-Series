#include<bits/stdc++.h>
using namespace std;

int solve(string s){
            int count = 0;
        if(s.empty())
            return count;
        unordered_set<char>st;
        int i= 0;
        int j =0;
        while(j < s.size()){
            if(st.count(s[j])){
                while(s[i]!=s[j]){
                    st.erase(s[i]);
                    i++;
                }
                st.erase(s[i]);
                i++;
            }else{
                st.insert(s[j]);
                int set_size = st.size();
                count = max(count,set_size);
                j++;
            }
        }
        
       return count; 
}

int main(){


    string s="abcabcbb";

    cout<<solve(s)<<"\n";
    return 0;
}