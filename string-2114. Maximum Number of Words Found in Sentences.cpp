class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxword=0;
        
        for(auto it:sentences){
            
            
            int count=1;
            
           for(auto word:it){
               
               if(word==' '){
                   count++;
               }
           }
            maxword=max(maxword,count);
        }
        
        return maxword;
    }
};
