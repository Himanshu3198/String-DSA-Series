#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<string,int>&a,pair<string,int>&b){
    return a.second <b.second;
}

string solve(string arr[],int n){

    map<string,int>mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    // vector<pair<string,int>>v;
    // for(auto &it:mp){
    //     v.push_back(it);
    // }
    // sort(v.begin(),v.end(),cmp);

    // for(auto it:v){
    //     cout<<it.first<<" "<<it.second<<"\n";
    // }
    
     int first_max=INT_MIN;
     int sec_max=INT_MIN;

     for(auto it:mp){
         if(it.second>first_max){
             sec_max=first_max;
             first_max=it.second;
         }
         else if(it.second>sec_max && it.second!=first_max){
             sec_max=it.second;
         }
     }


     for(auto it:mp){
         if(it.second==sec_max){
             return it.first;
         }
     }

   


}
int main(){


    string arr[]={"aaa", "bbb", "ccc", "bbb", "aaa", "aaa"};
    int n=6;
   cout<< solve(arr,n);
}