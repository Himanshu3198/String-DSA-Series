static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
         int len=1<<k;
         set<string>st;
        
        int count=0;
//          for(int mask=0;mask<len;mask++){
             
//              string str="";
//              count=0;
//              for(int i=0;i<32 && count<=k;i++){
//                  if(mask&(1<<i)){
//                      str+='1';
//                      count++;
//                  }else{
//                      str+='0';
//                      count++;
//                  }
                 
//                  if(count==k){
//                      cout<<str<<" ";
//                      st.insert(str);
//                      break;
//                  }
                     
//              }
//          }
       
         for(int i=0;i<s.size();i++){
             
             string curr=s.substr(i,k);
             if(curr.size()==k) st.insert(curr);
           
         }
        
         
        return st.size()==(1<<k);
    }
};
