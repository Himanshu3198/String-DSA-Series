
//  time complexity O(n)
//  space complexity O(n)
class Solution {
public:
    vector<int>Z_function(string &s){
        
         int n=s.size();
         vector<int>z(n,0);
        for(int i=1,l=0,r=0;i<n;i++){
           // if current char lies bw l and r then prev calculated z values can be used
            if(i<=r)
            //  by doing z[i-l] then answer could be wrong so minimum initialization
            //  can be done by r-l+1 end segment of max z values till now - current index            
              z[i]=min(r-i+1,z[i-l]);
            while(i+z[i]<n and s[z[i]]==s[i+z[i]]) ++z[i]; // trival calculation of z values
            // this if condition update  range of l and r max prefix length
            if(i+z[i]-1>r)
                l=i,r=i+z[i]-1;
        }
        return z;
    }
    long long sumScores(string s) {
        
        vector<int>res=Z_function(s);
        long long ans=0;
        for(auto &it:res) ans+=it;
        ans+=s.size();
        return ans;
       
    }
};
