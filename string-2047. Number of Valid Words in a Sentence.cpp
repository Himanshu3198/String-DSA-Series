// 2047. Number of Valid Words in a Sentence

class Solution {
public:
    
    
      bool isValid(string s){
          
          int n=s.length();
          int hyphen=0;
          
          for(int i=0;i<n;i++){
              
              if(isdigit(s[i])){
                  return false;
              }
              else if(isalpha(s[i])){
                  
                  continue;
              }
              else if(s[i]=='-'){
                 if(++hyphen>1) return false;
                  if((i-1)<0 or !isalpha(s[i-1]) or (i+1)>=n or !isalpha(s[i+1])){
                      return false;
                  }
              }else{
                  
                  
                  if(i!=n-1){
                      return false;
                  }
              }
                     
          }
          
          return true;
      }
    
    int countValidWords(string sen) {
        
        
     istringstream ss(sen);
        
        string w;
        int  res=0;
        while(ss>>w){
            
          res+=isValid(w);
        }
        
         return res;
        
    }
};
