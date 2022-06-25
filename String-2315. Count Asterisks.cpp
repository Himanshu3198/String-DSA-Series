class Solution {
public:
    int countAsterisks(string s) {
     
        
          int n=s.size();
          int res=0;
        
         int i=0;
        while(i<n){
            if(s[i]=='*'){
                res++;
                i++;
                continue;
            }
            if(s[i]=='|'){
                
                int j=i+1;
                while(j<n && s[j]!='|'){
                    
                    // if(s[j]=='*') res++;
                    j++;
                }
                i=j+1;
            }else{
                i++;
            }
        }
        return res;
    }
};
