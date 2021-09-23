class Solution {
public:
    string breakPalindrome(string p) {
        
        int n=p.length();
        if(n<2){
            
            return "";
        }
        
         
      
      
        
         bool op=false;
        for(int i=0;i<n/2;i++){
            
                  if(p[i]!='a'){
                
                p[i]='a';
                op=true;
                
                break;
            }
        }
        
        if(!op){
            
            p[n-1]='b';
            
        }
        
        return p;
        
        
          
    }
};
