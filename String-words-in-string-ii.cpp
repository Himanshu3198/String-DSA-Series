
class Solution {
public:
    string reverseWords(string s) {
        
        stack<char>st;
           string res="";
        for(char c:s){
            if(c!=' '){
                 st.push(c);
            }
            else{
                
                  while(!st.empty()){
            
                    res+=st.top();
            st.pop();
                      
                  }
                      
                 if(c!='\0') {
                     res+=" ";
                 }  
        }
            
            }
           
        
        while(!st.empty()){
            
             res+=st.top();
            st.pop();
        }
        
     
        
      
        return res;
    }
};
