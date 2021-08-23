/* 
  author:himanshu3198
  problem:diffrent string codechef cook-off aug-21
  */
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E "\n"
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define setbits(x) __builtin_popcount(x)
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fastio();
    int t = 1;
    cin >> t;

    while (t--)
    {

   
     	    int N;
	    cin>>N;
	    string S,ans;
	    for(int i=0;i<N;i++){
	        cin>>S;
	        if(S[i] == '0'){
	            ans+='1';
	        }else{
	            ans+='0';
	        }

        }

         cout<<ans<<E;

	    
	 

      
      
    }
  
   


    return 0;
}