#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends



   char flipper(char ch){
       
       return (ch=='0')? '1':'0';
   }

  int helper(string s,char expect){
      
      int count=0;
      
      for(int i=0;i<s.length();i++){
          
          if(s[i]!=expect){
              count++;
          }
          expect=flipper(expect);
      }
      return count;
  }
int minFlips (string s)
{
    // your code here
    
      return min(helper(s,'1'),helper(s,'0'));
        
    }
 