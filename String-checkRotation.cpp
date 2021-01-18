// Given two strings s1 and s2, write a function to say whether s2 is a rotation of s1 or not

#include<bits/stdc++.h>
using namespace std;

bool isRotation(string s1,string s2){

    string s3=s1+s1;

    if(s3.find(s2)!=std::string::npos)

    //   std::string::npos=-1
       return true;
    else
     return false;

}

int main(){

    string s1="abcde";
    string s2="deabc";

    if(isRotation(s1,s2)){
        cout<<"Yes \n";
    }
    else{
        cout<<"No\t";
    }
}