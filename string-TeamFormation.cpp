/* 
  author:himanshu3198
  problem:team formation codechef cook-off aug-21
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

      string s,t;

      cin>>s;
      cin>>t;


      ll prog=0,eng=0,both=0,rem=0;

      fr(i,n){
          if(s[i]=='1' and t[i]=='0'){
              prog++;
          }
          else if(t[i]=='1' and s[i]=='0'){
              eng++;
          }
          else if(s[i]=='1' and t[i]=='1'){
              both++;
          }
          else{
              rem++;
          }
      }
        
      int ans1=0,ans2=0, ans3=0, ans4=0;

     
      if(prog>0 and eng>0){

         ans1=min(prog,eng);

          if(prog<eng){
              swap(prog,eng);
          }

          prog-=ans1;

          if(both>0 and prog>0){

            ans2=min(both,prog);
  
           both-=ans2;

            
          }

          if(both>0 and rem>0){

              ans3=min(both,rem);
               both-=ans3;
          }
   
        if(both>0){
            ans4=both/2;
        }
          
      }
      else if(prog==0 or eng==0){

        if(prog<eng){
            swap(prog,eng);
        }

          if(both>0 and prog>0){

            ans2=min(both,prog);
  
           both-=ans2;

            
          }
            if(both>0 and rem>0){

              ans3=min(both,rem);
               both-=ans3;
          }

            if(both>0){
            ans4=both/2;
        }


      }


      int res=ans1+ans2+ans3+ans4;

      cout<<res<<E;
    }
  
   


    return 0;
}