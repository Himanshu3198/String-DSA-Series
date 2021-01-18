#include<bits/stdc++.h>
using namespace std;
string find(int n,string &str){

    if(n==1)
       return "1";
       string res;

       int count=1;
       for(int i=0;i<str.length();i++){
           if(str[i]!=str[i+1]){
               res.push_back(count+'0');
               res.push_back(str[i]);
               count=1;
           }
           else{
               count++;
           }
       }
       return res;
}

string countAndSay(int n){

        string str;
        for(int i=1;i<=n;i++){
            str=find(i,str);
        }
        return str;
    }

int main(){

       cout<<countAndSay(4)<<"\n";

    // // int count=0;
    // string res="123";
    // cout<<res[2]<<" "<<res[3];

  
    
}