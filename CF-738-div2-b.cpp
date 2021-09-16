/* 
   himanshu3198
   problem:https://codeforces.com/contest/1559/problem/B

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

     int n;
     cin>>n;

     string s;
     cin>>s;

       int cnt1=0,cnt2=0;
        string res=s;
     fr(i,n){
          if(s[i]=='R' or s[i]=='B'){

              continue;
          }
         if(i-1<0){

             if(s[i+1]=='?'){

                 s[i]='B';
             }
             else if(s[i+1]=='B'){
                 s[i]='R';
             }
             else{
                 s[i]='B';
             }
         }
         else{

             if(s[i-1]=='B'){
               s[i]='R';

             }
             else{

                 s[i]='B';
             }

         }
     }


       for(int i=0;i<n-1;i++){

           if(s[i]==s[i+1]){
               cnt1++;
           }
       }
        string ans1=s;
         s=res;
       
         fr(i,n){
          if(s[i]=='R' or s[i]=='B'){

              continue;
          }
         if(i-1<0){

             if(s[i+1]=='?'){

                 s[i]='R';
             }
             else if(s[i+1]=='B'){
                 s[i]='R';
             }
             else{
                 s[i]='B';
             }
         }
         else{

             if(s[i-1]=='B'){
               s[i]='R';

             }
             else{

                 s[i]='B';
             }

         }
     }

      for(int i=0;i<n-1;i++){

           if(s[i]==s[i+1]){
               cnt2++;
           }
       }


      if(cnt1>cnt2){

           res=s;
      }
      else{
          res=ans1;
      }

      
       cout<<res<<E;

 
    }
   
    return 0;
}