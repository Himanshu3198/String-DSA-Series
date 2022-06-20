class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        
//       t.c : O(n*(nlog(n)))
        sort(words.begin(),words.end(),[&](string a, string b){
            return a.size()>b.size();
        });
        string res="";
        res+=(words[0]+"#");
        for(int i=1;i<words.size();i++){
            
            if(res.find(words[i]+"#")!=string::npos){
                continue;
            }
            res+=(words[i]+"#");
        }
        
        return res.size();
    }
};
