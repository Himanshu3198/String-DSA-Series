
// 49. Group Anagrams

class Solution {
public:
    
    /* the idea is to using unordered map iterate over string store it into the temporary variable
    and sort it if it not present in map push it into the map else if it is already present in map then push
    back into the that index of string after than push the vector of string in result vector  */
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>mp;
        
          if(strs.size()==0) return {};
        for(string x:strs){
            
            string s=x;
            
            sort(x.begin(),x.end());
            
            if(mp.find(x)!=mp.end()){
                
                mp[x].push_back(s);
            }
            else{
                
                mp[x]={s};
            }
        }
        vector<vector<string>>res;
        
           for(auto x:mp){
            
              cout<<x.first<<"---> ";
               
               for(auto v:mp[x.first]){
                   
                   cout<<v<<" ";
               }
               cout<<"\n";
        }
        
        for(auto x:mp){
            
            res.push_back(x.second);
        }
        
        return res;
    }
};


// *************************java code*********************************



import java.util.*;  
class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
          List<List<String>>res=new ArrayList<>();
          HashMap<String,List<String>>hm =new HashMap<String,List<String>>();
          for(int i=0;i<strs.length;i++){
              String t=(String)strs[i];
              char temp[]=t.toCharArray();
              Arrays.sort(temp);
              t=new String(temp);
              if(hm.get(t)==null)
                  hm.put(t,new ArrayList<String>());
              hm.get(t).add(strs[i]);
          }
          // for(String it:hm.keySet()){
          //     res.add(hm.get(it));
          // }
          // return res;
          return hm.values().stream().collect(Collectors.toList());
    }
}
