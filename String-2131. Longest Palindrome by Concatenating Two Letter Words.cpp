class Solution {
public:
    int longestPalindrome(vector<string>& words) {

        unordered_map<string,int>mp;
        for(auto s:words) mp[s]++;
        int ans=0;
        bool hasPal=false;
        for(auto&[word,freq]:mp){
            int currAns=0;
            cout<<word<<" ";
            if(word[0]==word[1]){
              
                if(freq&1){
                    hasPal=true;
                    freq--;
                }
                currAns=freq*2;
            }else{
                string t=word;
                reverse(t.begin(),t.end());
                if(mp.count(t) && mp[word]!=-1 && mp[t]!=-1){
                    int count=min(mp[word],mp[t]);
                    mp[word]=-1;
                    mp[t]=-1;
                   
                    currAns=4*count;
                }
            }
            cout<<"\n";
            cout<<currAns<<" ";
            ans+=currAns;
            }
       cout<<"ans-"<<ans;
       if(hasPal){
          ans+=2;
      }
      return ans;

    }
};
