//  time complexity O(n)
//  space complexiy O(n/2)
class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        
        int start=intLength%2==0?pow(10,intLength/2-1):pow(10,intLength/2);
        
        vector<long long>res;
        for(auto &q:queries){
            
            string  palindrome=to_string(start+q-1);
            string  temp=palindrome;
                 reverse(temp.begin(),temp.end());
                 if(intLength%2==0){
                     
                         palindrome+=temp;
                         if(palindrome.size()==intLength)
                         res.push_back(stoll(palindrome));
                         else
                          res.push_back(-1); 
                     }else{
                         palindrome+=temp.substr(1);
                         if(palindrome.size()==intLength)
                         res.push_back(stoll(palindrome));
                         else
                          res.push_back(-1); 
                    }        
        }
        
        return res;
    }
};
