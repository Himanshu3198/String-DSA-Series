// 1629. Slowest Key

class Solution {
public:
    char slowestKey(vector<int>& rT, string kP) {
        
             int n=rT.size();
        
             int maxEle=rT[0];
        
             vector<int>prefix(n,0);
        
            prefix[0]=rT[0];
           for(int i=1;i<n;i++){
               
               prefix[i]=rT[i]-rT[i-1];
               maxEle=max(maxEle,prefix[i]);
               
               
           }
        
    
          vector<char>res;
        
           for(int i=0;i<n;i++){
               
               if(prefix[i]==maxEle){
                   
                   res.push_back(kP[i]);
               }
           }
        
      
        
        if(res.size()>1){
            
            sort(res.begin(),res.end());
            return res[res.size()-1];
        }
        
        return res[0];
        
              
    }
};
