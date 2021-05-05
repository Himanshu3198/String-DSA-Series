#include <bits/stdc++.h>
using namespace std;
    
    bool checkInclusion(string s1, string s2) {
       
           int n=s1.length();
        int m=s2.length();
        
        if(m<n){
            return false;
        }
          
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        
        
        
        for(auto i:s1){
            
            v1[i-'a']++;
        }
        
        for(int i=0;i<s1.length();i++){
            
            v2[s2[i]-'a']++;
        }
        
        if(v1==v2){
            return true;
        }
        int l=0;
        
        for(int i=s1.length();i<s2.length();i++){
            
            v2[s2[l]-'a']--;
            v2[s2[i]-'a']++;
            
            if(v1==v2){
                return true;
            }
            
            l++;
        }
        
        return false;
              
        
       
        
        
        
    }

int main()
{

    string s1 = "cab", s2 = "dbabcd";


    cout<<checkInclusion(s1, s2) ;

    
}