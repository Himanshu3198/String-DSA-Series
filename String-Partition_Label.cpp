// 763. Partition Labels

class Solution {
public:
    
    /* the idea is to in first traversal of string  store the last occurance of an character of string 
    and in the second traversal of string when then current i pointer reach maximum indx of character then that will 
    be the partition index of string calcute that particular window length and add it into the resultant vector*/
    vector<int> partitionLabels(string s) {
        
        
        
        vector<int>freq(26,0);
        
        
        for(int i=0;i<s.length();i++){
            
            
            freq[s[i]-'a']=i;
        }
        
        
    
        vector<int>res;
        
      int  max_idx=freq[s[0]-'a'];
        
        
        bool flag=true;
        
        

        
        int last_idx=0;
        for(int i=0;i<s.length();i++){
            
           max_idx=max(max_idx,freq[s[i]-'a']);
            if(i==max_idx and flag==1){
                last_idx=i;
                res.push_back(i+1);
                flag=false;
            }
            
            else if(i==max_idx and !flag){
                
                int last=res.back();
                res.push_back(abs(last_idx-i));
                last_idx=i;
            }
             
        }
        
        return res;
        
        
    }
};
