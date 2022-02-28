class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string>res;
        int n=nums.size();
        
        
         if(n==0){
             return res;
         }
        
        if(n==1){
            
            return {to_string(nums[0])};
        }
        
        for(int i=0;i<nums.size();){
          
            
            int start=i,end=i;
             if(end+1<n and nums[end+1]==(nums[end]+1)){
                 while(end+1<n and nums[end+1]==(nums[end]+1)){
                end++;
               }
                 if(end>start){
                     res.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
                 }
             }else{
                 
                 res.push_back(to_string(nums[i]));
             }
            
            i=end+1;
        
         }
        
        return res;
    }
};
