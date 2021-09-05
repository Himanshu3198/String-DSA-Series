class Solution {
public:
    string orderlyQueue(string s, int k) {
        
       vector<string>v;
          if(k==1){
              
              for(int i=0;i<s.length();i++){
                  
                  char curr=s[0];
                  
                   s.erase(s.begin());
                  s+=curr;
                  
                  v.push_back(s);
              }
              
              sort(v.begin(),v.end());
              
              return v[0];
          }
        
        
         sort(s.begin(),s.end());
        
        return s;
    }
};
