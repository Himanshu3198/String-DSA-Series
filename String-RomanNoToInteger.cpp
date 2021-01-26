#include<bits/stdc++.h>
using namespace std;


 int romanToInt(string s){
             map<char, int> m = {{'I', 1}, {'V', 5},{'X', 10},{'L', 50},
        {'C', 100},{'D', 500},{'M', 1000}};


        int total=0;
        for(int i=0;i<s.length();i++){
            if(m[s[i+1]]<=m[s[i]]){
                total+=m[s[i]];
            }
            else {
                total-=m[s[i]];
            }
        }
        return total;
 }
int main(){

    string s="IV";  
    // int result=0;

    // for(int i=0;i<s.length();i++){
     
    //     if(s[i]=='I'){
    //         result+=1;
    //     }

    //    else if(s[i]=='V'){
    //         result+=5;
    //     }
    //   else  if(s[i]=='X'){
    //         result+=10;
    //     }
    //    else if(s[i]=='L'){
    //         result+=50;
    //     }
    //     else if(s[i]=='C'){
    //         result+=100;
    //     }
    //     else if(s[i]=='D'){
    //         result+=500;
    //     }
    //   else  if(s[i]=='M'){
    //         result+=1000;
    //     }
    // }

    // cout<<result<<"\n";
  cout<<romanToInt(s)<<"\n";

  
    return 0;
}