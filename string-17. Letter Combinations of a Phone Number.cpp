// 17. Letter Combinations of a Phone Number
class Solution {
public:
    
    
    /*  the idea is to store the key features into the map then  generate all possible
    letter combination using backtracking eg 234 features abc,def,ghi
     first store their alphabatic features into the map  then iterate it using recursion when idx reach last
      digits.length then return empty string now from the last the first set 
     genrate it  now this temp for curr stack then
      {g,h,i}
     {dg,dh,di,eg,eh,ei,fg,fh,fi,}
     
     then final output that generated is {"adg","adh","adi","aeg","aeh","aei","afg","afh","afi","bdg","bdh","bdi","beg","beh",
     "bei","bfg","bfh","bfi","cdg","cdh","cdi","ceg","ceh","cei","cfg","cfh","cfi"}
     
     
     */
     vector<string> solve(string &digits,map<int,string>&mp,int idx){
         
         if(idx==digits.length()) {
             return {""};
         }
         
         vector<string>temp=solve(digits,mp,idx+1);
         
         vector<string>ans;
         for(auto x:mp[digits[idx]-'0']){
             
             
             for(auto y:temp){
                 
                 ans.push_back(x+y);
             }
         }
         return ans;
         
     }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        map<int,string>mp;
        
           mp[2]="abc";
           mp[3]="def";
           mp[4]="ghi";
           mp[5]="jkl";
           mp[6]="mno";
           mp[7]="pqrs";
           mp[8]="tuv";
           mp[9]="wxyz";
        
     
          if(digits.length()==0){
              return res;
          }
        
        
       return  solve(digits,mp,0);
        
       
        
        
    }
};
