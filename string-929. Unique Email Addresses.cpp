// 929. Unique Email Addresses

class Solution {
public:
    int numUniqueEmails(vector<string>&s) {
        
        
          set<string>st;
        
             bool flag=true;
          for(int i=0;i<s.size();i++){
                 string last="";
              
              
                while(s[i].back()!='@'){
                    
                    last=s[i].back()+last;
                    s[i].pop_back();
                }
              string first="";
              for(int j=0;j<s[i].size();j++){
                  
                       
                     if(s[i][j]=='@') continue;
                    if(s[i][j]=='.') continue;
                  
                    if(s[i][j]=='+'){
                        
                          break;
                    
                    
                    }
                  first+=s[i][j];
                  
              }
                first=first+ (char)'@'+last;
              st.insert(first);
              
          }
        
        for(auto it:st){
            
            cout<<it<<" ";
        }
        
        return st.size();
        
        
    }
};
