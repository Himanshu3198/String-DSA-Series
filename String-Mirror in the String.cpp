/*
 author:himanshu3198
 https://codeforces.com/contest/1616/problem/B

*/
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E "\n"
#define pb push_backCF
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

void solve()
{
   

    ll n;
    cin>>n;
    string s;
    cin>>s;

    string ans="";

    ans.push_back(s[0]);

    for(int i=1;i<n;i++){

        if(s[i]<ans.back()){
            ans.push_back(s[i]);
        }else if(ans.size()>1 and ans.back()==s[i]){
            ans.push_back(s[i]);
        } else break;
    }


     string  ansrev=ans;

       reverse(all(ansrev));

       cout<<ans<<ansrev<<E;



      




  
}


int main()
{
    fastio();
    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}
