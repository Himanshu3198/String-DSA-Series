// 224. Basic Calculator

class Solution {
public:
    int calculate(string s) {
        
        
         int ans=0,currSum=0,sign=1;
         stack<int>st;
         int n=s.length();
        
        
         if(s.length()==1 and s[0]>='0' and s[0]<='9') return s[0]-'0';
        for(int i=0;i<n;i++){
            
            if(s[i]==' ') continue;
            
            if(s[i]=='-'){
                sign=-1;
            }
            else if(s[i]>='0' and s[i]<='9'){
                
                long long  val=0;
                
                while(i<n and s[i]>='0' and s[i]<='9'){
                    
                    val=val*10+s[i]-'0';
                    i++;
                }
                i--;
                
                currSum+=(val*sign);
                sign=1;
                
                
            }
            
            else if(s[i]=='('){
                
                st.push(currSum);
                st.push(sign);
                currSum=0;
                sign=1;
            }
            else if(s[i]==')'){
                
                if(st.size()>0){
                      currSum*=st.top();
                    
                    st.pop();
                    currSum+=st.top();
                    st.pop();
                    
                }
                
            }
        }
        
        return currSum;
    }
};
