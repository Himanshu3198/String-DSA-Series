// Check whether two strings are anagram of each other

// Time Complexity O(nLogn)
#include<bits/stdc++.h>
using namespace std;

bool areAnagram(string str1,string str2){
    int n=str1.length();
    int m=str2.length();

    if(n!=m){
        return false;
    }

    else{
        sort(str1.begin(),str1.end());
         sort(str2.begin(),str2.end());

         for(int i=0;i<n;i++){
            if(str1[i]!=str2[i])
               return false;
            return true;
         }
    }
}

int main(){

    string str1="listen";
    string str2="silent";

    if(areAnagram(str1,str2)){
        cout<<"Yes two strings are anagram of each other\n";
    }
    else{
        cout<<"No two strings are not anagram of each other\n";
    }

    return 0;
}