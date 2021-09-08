#define ll    long long int
class Solution {
public:
    
 
    string shiftingLetters(string s, vector<int>& shifts) {
        
        
       ll currShift=0;
        
        for(ll i=shifts.size()-1;i>=0;i--){
            
            
            s[i]=((s[i]-'a')+(currShift+shifts[i])%26)%26+'a';
            
             currShift+=shifts[i];
        }
        
        return s;
}
    
};
