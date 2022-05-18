class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
           string s=to_string(num);
           int n=s.size();
           int res=0;    
          for(int i=0;i<=n-k;i++){
              string  str=s.substr(i,k);
              if(str.size()==k){
                  int x=stoi(str);
                  if(x!=0 && num%x==0) res++;
              }
          }
          return res;
    }
};
