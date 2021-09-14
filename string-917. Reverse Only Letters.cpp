class Solution {
public:
    
    string func1(string &s){
                stack<char>st;
        
         int n=s.length();
        
        for(int i=0;i<n;i++){
            
            if(s[i]>='a' and s[i]<='z'){
                
                st.push(s[i]);
            }
            else if(s[i]>='A' and s[i]<='Z'){
                  st.push(s[i]);
            }
        }
        
           for(int i=0;i<n;i++){
            
            if(s[i]>='a' and s[i]<='z'){
                
                s[i]=st.top();
                st.pop();
            }
            else if(s[i]>='A' and s[i]<='Z'){
                  s[i]=st.top();
                   st.pop();
            }
        }
        
        return s;
    }
    string reverseOnlyLetters(string s) {

        
        // return func1(s);
        
        
          
         int i=0,j=s.length()-1;
        
        while(i<j){
            
            if(isalpha(s[i]) and isalpha(s[j])){
                
                swap(s[i],s[j]);
                i++;
                j--;
            }
            
            else if(!isalpha(s[i]) and !isalpha(s[j])){
                i++;
                j--;
            }
            
            else if(!isalpha(s[i])){
                
                i++;
            }
            else if(!isalpha(s[j])){
                j--;
            }
        }
        
        return s;
        
       
    }
};
