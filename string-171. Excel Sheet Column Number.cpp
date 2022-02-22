class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        long long ans=0;
        
        for(auto &c:columnTitle){
            
            int d=(c-'A')+1;
            cout<<d<<"\n ";
            ans=ans*26+d;
        }
        return ans;
    }
};
