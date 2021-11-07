// 2062. Count Vowel Substrings of a String

class Solution {
public:
    
    
        bool isVowel(char c){
            
            return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
        }
    int countVowelSubstrings(string word) {
        
        
              int res=0;
        
        for(int i=0;i<word.length();i++){
            
             set<char>st;
            
            for(int j=i;j<word.length();j++){
                
                
                if(!isVowel(word[j])) break;
                
                st.insert(word[j]);
                if(st.size()==5) res++;
            }
            
             
        }
        
        return res;
    }
};
