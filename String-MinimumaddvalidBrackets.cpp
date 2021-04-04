// 921. Minimum Add to Make Parentheses Valid
// time complexity O(n)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


	  int solve(string S){
	      
	      
	      
	         int n=S.length();
        stack<char>s1,s2;
        
    
        
        for(int i=0;i<n;i++){
            
            if(S[i]=='{'){
                
                s1.push(S[i]);
            }
            else if(S[i]=='}'){
                s2.push(S[i]);
                
                if(s1.size()>0){
                    
                     s1.pop();
                    s2.pop();
                }
            }
        }
        
          return s1.size()+s2.size();
	  }
	  


int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    string S;
	    cin>>S;
	    int ans;
	   ans= solve(S);
	   cout<<ans<<"\n";
	}
	return 0;
}


// testcase:
// 2
// {{}
// 1
// {{}}}
// 1