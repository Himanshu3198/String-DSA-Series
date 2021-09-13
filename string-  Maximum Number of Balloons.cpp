  Maximum Number of Balloons


class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        string str="balloon";
        
        vector<int>freq(27,0);
        
         int n=text.length();
          for(int i=0;i<n;i++){
              
              freq[text[i]-'a']++;
          }
        
        int minB=INT_MAX;
        for(int i=0;i<7;i++){
            
            if(freq[str[i]-'a']==0){
                
                return 0;
            }
            
        
            minB=min(minB,freq[str[i]-'a']);
        }
           if(freq['l'-'a']<2 or freq['o'-'a']<2 ) return 0;
           if(freq['l'-'a']<2*minB or freq['o'-'a']<2*minB){
               
               return min(freq['l'-'a']/2,freq['o'-'a']/2);
           }
          
        
        return minB;
    }
};
