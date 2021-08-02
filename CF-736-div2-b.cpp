/* 
   himanshu3198
   problem:Gregor and the Pawn Game

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
#define fastio()        ios_base::sync_with_stdio(false);  cin.tie(NULL);
using namespace std;


int main()
{
    fastio();
    int t=1;
    cin >> t;
    while (t--){
      
         int  n;
        cin>>n;

        string s,t;

        cin>>s;
        cin>>t;


        int a[2][n];

         for(int i=0;i<s.length();i++){

             a[0][i]=s[i]-'0';
         }
          for(int i=0;i<t.length();i++){

             a[1][i]=t[i]-'0';
         }





       long long int count=0;
        for(int i=0;i<n;i++){

           if(a[1][i]==0) continue;


           if(a[0][i]==0){
               count++;
               a[0][i]=2;
           }
           else{

               if(i>=1 and a[0][i-1]==1){
                   count++;
                   a[0][i-1]=2;
               }
               else if(i<n-1 and a[0][i+1]==1){
                   count++;
                   a[0][i+1]=2;
               }
           }

        }

        cout<<count<<E;
   
     
    }

    return 0;
}