class Solution {
public:
    int compareVersion(string s1, string s2) {
        
        
        
          vector<int>v1,v2;
        
          stringstream ss1(s1);
          stringstream ss2(s2);
        
        
         string str;
        while(getline(ss1,str,'.')){
            
            v1.push_back(stoi(str));
        }
        str="";
        while(getline(ss2,str,'.')){
            v2.push_back(stoi(str));
        }
        
     
//            for(auto it:v1) cout<<it<<" ";
//            cout<<"\n";
        
//           for(auto it:v2) cout<<it<<" ";
        
        

        int n=v1.size(),m=v2.size();
        
       
        
          for(int i=0;i<max(n,m);i++){
              
              int op1=i<n?v1[i]:0;
              int op2=i<m?v2[i]:0;
              
              if(op1>op2) return 1;
              else if(op1<op2) return -1;
          }
        
        

        
        return 0;
        
    }
};
