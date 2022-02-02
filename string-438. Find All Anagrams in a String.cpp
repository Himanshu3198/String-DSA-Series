class Solution {
public:

    vector<int> findAnagrams(string s, string p) {
        
          int n=s.size(),k=p.size();
        
          long long int hash=0;
    
        for( char c:p){
            
            long long int x=c-'a';
            hash+=(x*x*x);
        }
            
        int i=0,j=0,count=0;
        
         
        vector<int>res;
            long long int currHash=0;
        
          while(j<k){
              long long int x=s[j]-'a';
            currHash+=(x*x*x);
              j++;
         }
        cout<<j;
        if(currHash==hash){
            res.push_back(j-k);
        }
        while(j<n){
    
              long long int x=s[j]-'a';

              currHash+=(x*x*x);
            long long int y=s[i]-'a';
            currHash=currHash-(y*y*y);
             
                    i++;
                 if(currHash==hash){
                   res.push_back(i);  
                 }
            j++;
        }
        
        return res;
             
  
    }
};
static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
