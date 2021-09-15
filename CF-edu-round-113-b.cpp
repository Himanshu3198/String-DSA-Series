// Educational Codeforces Round 113 (Rated for Div. 2)
// https://codeforces.com/contest/1569/problem/B
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

int main()
{
    fastio();
    int t = 1;
    cin >> t;

    while (t--)
    {

   
       int n;
       cin>>n;
       string s;
       cin>>s;

       vector<vector<char>>res(n,vector<char>(n));

         fr(i,n){

             fr(j,n){

                 if(i==j){

                     res[i][j]='X';
                 }
                 else{
                      res[i][j]='=';
                 }
             }
         }

         int cnt=0;
            vector<int> vec;
         fr(i,n){

             if(s[i]=='2'){
                  cnt++;
                  vec.push_back(i);
             } 
         }


         if(cnt==2 or cnt==1){

            cout<<"NO\n";

         }
         else{


            cout<<"YES\n";
                
            for(int i=0;i<vec.size();i++){

                int u=vec[i];
                int v=vec[(i+1)%vec.size()];

                res[u][v]='+';
                res[v][u]='-';
            }  


            fr(i,n){

                fr(j,n){

                    cout<<res[i][j];
                }
                cout<<E;
            }   

         }




     
 
     


    

    }

    return 0;
     
     
  }
  
   


   
