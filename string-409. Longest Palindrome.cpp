
//  time complexity(n+128)
//  space complexity(128)
class Solution {
public:
    int longestPalindrome(string s) {
        
        vector<int>freq(128,0);
        
        for(int i=0;i<size(s);i++){

                freq[s[i]-'A']++;
         
        }
        int even=0,odd=0,make_even=0,extra=0;
        
           for(int i=0;i<128;i++){
               
               if(freq[i]==0) continue;
               
               if(freq[i]%2==0){
                   even+=freq[i];
               }else{
                   
                   make_even+=(freq[i]-1);
                   extra=1;
                   odd=max(odd,freq[i]);
               }
           }        
        if(!even) return odd;
        if(!odd)  return even;
        
        return even+make_even+extra;
        
    }
};
