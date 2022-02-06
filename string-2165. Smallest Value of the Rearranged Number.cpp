class Solution {
public:
    



 long long smallestNumber(long long n) {
        
       if(n<0){
           

           string s=to_string(n);
           s=s.substr(1);
           
           sort(s.begin(),s.end(),greater<char>());
           
           if(s[0]=='0'){
               int j=1;
               while(s.size()>1 and j<s.size()){
                   
                   if(s[0]!=s[j]){
                       swap(s[0],s[j]);
                       break;
                   }
                   j++;
               }
           }
           long long ans=stoll(s);
           return -1*ans;
           
       }else{
              string s=to_string(n);
             sort(s.begin(),s.end());
           
           if(s[0]=='0'){
               int j=1;
               while(s.size()>1 and j<s.size()){
                   
                   if(s[0]!=s[j]){
                       swap(s[0],s[j]);
                       break;
                   }
                   j++;
               }
           }
           long long ans=stoll(s);
           return ans;
           
       } 
     return 0;
 }
};

