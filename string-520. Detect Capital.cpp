class Solution {
public:
    bool detectCapitalUse(string s) {
        
        
        
          if(s.size()==1){
              return true;
          }
        
        if(s[0]>='a' and s[0]<='z'){
            
            
            for(auto it:s){
                
                if(it>='a' and it<='z'){
                    
                }else{
                    return false;
                }
            }
        }else if((s[0]>='A' and s[0]<='Z') and (s[1]>='A' and s[1]<='Z')){
                
                 for(auto it:s){
                
                if(it>='A' and it<='Z'){
                    
                }else{
                    return false;
                }
            }
        }else{
                
                for(int i=1;i<s.size();i++){
                    
                     if(s[i]>='a' and s[i]<='z'){
                    
                }else{
                    return false;
                }
                }
                
                
            
            }
            
            
          
    return true;  
             
    }
};
