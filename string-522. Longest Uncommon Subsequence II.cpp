// 522. Longest Uncommon Subsequence II

class Solution {
public:
 
    static bool compare(string &s1,string &s2) {
        return s1.size() > s2.size();
    }
    

    bool isSubsequence(string a,string b) {
        int ptr1 = 0, ptr2 = 0;
        while(ptr1 < a.size() && ptr2 <b.size()) {
            if(a[ptr1] == b[ptr2]) ptr2++;
            ptr1++;
        }
        return ptr2 == b.size();
    }
    int findLUSlength(vector<string>& strs) {
        
 
        
        sort(strs.begin(),strs.end(),compare);
        
     
        map<string,int> T;
       for(int i=0; i<strs.size(); i++)
           T[strs[i]]++;
        
     
       for(int i=0; i<strs.size(); i++) {
           if(T[strs[i]] > 1) continue;
           else {
               string currentStr = strs[i];
               if(!i) return currentStr.size();
               for(int j=0; j<i; j++) {
                   if(!isSubsequence(strs[j],currentStr)) {
                       if(j==i-1) return currentStr.size();
                   }
                   else break;
               }
           } 
        }
     
        return -1;
    }
};
