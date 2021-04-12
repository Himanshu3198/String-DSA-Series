//https://www.codechef.com/APRIL21C/submit/SSCRIPT
#include <bits/stdc++.h>
using namespace std;

bool solve(string s, int n, int k)
{

    stack<char> st;
    
    int count=0;
    for(int i=0;i<s.length();i++){
        
        if(s[i]=='*'){
            count++;
        }
        else{
            count=0;
        }
        
        if(count>=k){
            return true;
        }
    }
    
    
     return false;
    }

 
int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;

        cin >> s;
        solve(s, n, k);
        if (solve(s, n, k))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
