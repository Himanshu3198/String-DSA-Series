class Solution {
public:
    string largestGoodInteger(string num) {
        
        string res="000";
        int n=num.size();
        bool flag=false;
        for(int i=1;i<n;i++){
            
            if(i+1<n &&num[i-1]==num[i] && num[i]==num[i+1]){
                string curr="";
                       curr+=num[i-1];
                       curr+=num[i];
                       curr+=num[i+1];
                 if(stoi(curr)>=stoi(res)){
                     res=curr;
                     flag=true;
                 }
            }
        }
        
        if(flag){
            return res;
        }
        return "";
    }
};
