class Solution {
public:
    int minimumRecolors(string s, int k) {
        
        int n=s.size();
        int res=n,black=0,cnt=0;
        for(int i=0;i<n;i++){
            cnt=0,black=0;
            for(int j=i;j<i+k && j<n;j++){
                
                black+=s[j]=='B';
                cnt++;
            }
            if(cnt<k) return res;
            res=min(res,k-black);
        }
        return res;
       
    }
};
