// https://codeforces.com/contest/1562/problem/B
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

ll Notprime(ll x, ll y)
{

    ll num = x * 10 + y;

    bool flag = false;
    for (ll i = 2; i <= num / 2; i++)
    {

        if (num % i == 0)
        {

            return 1;
            break;
        }
    }

    return 0;
}


int main()
{

    int t = 1;
    cin >> t;

    while (t--)
    {

        long long int n;
        cin >> n;
        string s;
        cin >> s;

        string res = "";
        bool flag = false;
        bool flag2=false;
        for(ll i=0;i<n;i++){

            if(s[i]=='1' or s[i]=='4' or s[i]=='6' or
            s[i]=='8' or s[i]=='9'){

                cout<<1<<E;
                cout<<s[i]<<E;
                flag2=true;
                break;
                
            }


        }
        if(flag2){
            continue;
        }
        for (ll i = 0; i < n-1; i++)
        {

            if (flag)
            {
                break;
            }
            for (ll j = i+1; j < n; j++)
            {

                if (i == j)
                    continue;

                if (Notprime(s[i] - '0', s[j] - '0'))
                {

                    res.push_back(s[i]);
                    res.push_back(s[j]);
                    flag = true;
                    break;
                }
            }
        }

        cout<<res.length()<<E;
        cout<<res<<E;
    }

    return 0;
}
