#include<bits/stdc++.h>
using namespace std;


int LongestRepeatingSubsequence(string str){

    int n=str.length();
 
     int lcs[n+1][n+1];

     for(int i=0;i<=n;i++){
         for(int j=0;j<=n;j++){
             if(i==0 || j==0){
                 lcs[i][j]=0;      //base condition
             }

             else if(str[i-1]==str[j-1] && i!=j){
                 lcs[i][j]=1+lcs[i-1][j-1];
             }
             else{
                 lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
             }
         }
     }

     return lcs[n][n];


  
}

int main(){

   string  str="aabb";
   cout<<LongestRepeatingSubsequence(str)<<"\n";
}