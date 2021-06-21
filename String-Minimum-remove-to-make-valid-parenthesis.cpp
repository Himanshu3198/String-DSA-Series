// 1249. Minimum Remove to Make Valid Parentheses

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
      int n=s.length();
        
        stack<pair<char,int>>st;
        stack<int>temp;
        
        for(int i=0;i<n;i++){
            
            if(s[i]=='('){
                st.push({s[i],i});
            }
            
            else if(s[i]==')'){
                if(st.size()==0){
                    temp.push(i);
                }
                 if(st.size()>0){
                    char curr=st.top().first;
                int curr_idx=st.top().second;
                     st.pop();
                 if(curr=='('){
                    ;
                 }
                
                else{
                    s.erase(s.begin()+curr_idx);
                }

                 }
            }
        }
        
         while(st.size()>0){
             
               int curr_idx=st.top().second;
               st.pop();
              s.erase(s.begin()+curr_idx);
             
        }
        
        while(temp.size()>0){
            int cur=temp.top();
            temp.pop();
            s.erase(s.begin()+cur);
        }

     
        
        return s;
    }
};
