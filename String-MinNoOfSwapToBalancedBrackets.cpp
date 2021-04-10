// time & space complexity O(n)  & O(1)
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:

        
    int minimumNumberOfSwaps(string s){
        // code here 
    

    int count=0,open=0,close=0,fault=0;

    for (int i = 0; i < s.length(); i++)
    {

         if(s[i]==']'){
             close++;
             fault=close-open;
         }
         else{
             open++;
             if(fault>0){
                 count+=fault;
                 fault--;
             }
         }
        
    }
    
    return count;
    }
    
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends
