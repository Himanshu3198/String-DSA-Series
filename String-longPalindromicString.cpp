#include <bits/stdc++.h>
using namespace std;
 

void printSubstr(string str,int start,int end){
    for(int i=start;i<=end;i++)
         cout<<str[i];
}

int longestPalSubstr(string str)
{
  int n=str.length();
  bool dp[n][n];
  memset(dp,0,sizeof(dp));

  for(int i=0;i<n;i++){
      dp[i][i]=true;
  }
  int maxlenght=1,start=0;

  for(int i=0;i<n-1;i++){
      if(str[i]==str[i+1]){
          dp[i][i+1]=true;
          start=i;
          maxlenght=2;
      }
  }

  for(int k=3;k<=n;k++){
      for(int i=0;i<n-k+1;i++){
          int j=i+k-1;

          if(dp[i+1][j-1] && str[i]==str[j]){
              dp[i][j]=true;
              if(k>maxlenght){
                  start=i;
                  maxlenght=k;
              }
          }
      }
  }

  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cout<<dp[i][j]<<" ";
      }

      cout<<"\n";
  }

  printSubstr(str,start,start+maxlenght-1);

  return maxlenght;
}



 

int main()
{
    string str = "aaaabbaa";
    // cout << "\nLength is: "
          longestPalSubstr(str);
    return 0;
}