// 67. Add Binary


class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;
        
        string s="";
        int curr=0;
        
        while(i>=0 or j>=0  or curr==1){
            
        curr+=i>=0?a[i--]-'0':0;
        curr+=j>=0?b[j--]-'0':0;
        
            s=char(curr%2+'0')+s;
            curr=curr/2;
        }
        return s;
    }
};
