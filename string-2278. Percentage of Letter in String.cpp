class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.size();
           int count=0;
           for(int i=0;i<n;i++){
              if(s[i]==letter) count++;
           }
        
         // cout<<count;
        int ans =(count*100)/n;
        return ans;
    }
};
