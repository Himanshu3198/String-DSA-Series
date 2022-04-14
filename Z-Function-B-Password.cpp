
/*
 author:himanshu3198

*/
#include     <bits/stdc++.h>
#define      ll long long int
#define      fr(i, n) for (int i = 0; i < (n); i++)
#define      rep(i, a, b) for (int i = (a); i < (b); i++)
#define      FORR(i, n) for (int i = (n); i >= 0; i--)
#define      fst first
#define      snd second
#define      E "\n"
#define      pb push_backCF
#define      mp make_pair
#define      all(x) (x).begin(), (x).end()
#define      MOD 1000000007LL
#define      MAX(a, b) ((a) > (b) ? (a) : (b))
#define      MIN(a, b) ((a) < (b) ? (a) : (b))
#define      ABS(x) ((x) < 0 ? -(x) : (x))
#define      setbits(x) __builtin_popcount(x)
#define      vi vector<int>
#define      vl vector<long long int>
#define      vvi vector<vector<int>>
#define      vvl vector<vector<long long int>>
#define      INF 1e18
#define      _Y puts("Yes")
#define      _N puts("No")
#define      showArr(v) for(auto it:v) cout<<it<<" "; cout<<E;
#define      Print(ans) cout<<ans<<E;
#define      Nitro()                      \
             ios_base::sync_with_stdio(false); \
             cin.tie(NULL);

using namespace std;

vector<int> z_function(string s){
    int n=s.size();
    vector<int>z(n);

    for(int i=1,l=0,r=0;i<n;i++){

        if(i<=r)
           z[i]=min(r-i+1,z[i-l]);
        while(i+z[i]<n and s[z[i]]==s[i+z[i]]) ++z[i];
        if(i+z[i]-1>r)
         l=i,r=i+z[i]-1;
    }
    return  z;
}

void himanshu3198()
{
     
    string s;
    cin>>s;

    vector<int>res=z_function(s);
    int maxPrefix=0;
    for(int i=0;i<s.size();i++){
  
        if(min(res[i],maxPrefix)>=s.size()-i){
            cout<<s.substr(i);
            return;
        }
        maxPrefix=max(maxPrefix,res[i]);

    }
    cout<<"Just a legend\n";



}


int main()
{
    Nitro();
    int t = 1;
    // cin >> t;

    while (t--)
    {

        himanshu3198();
    }

    return 0;
}
