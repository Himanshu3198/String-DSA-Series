#include<bits/stdc++.h>
using namespace std;

int BinaryCount(string s){
               int count=0;
        int prev=0,last=0;
        int n=s.length();
        char curr=s[0];  
       
        for(auto &i:s){
            if(i!=curr){
                
                count+=min(prev,last);
                prev=last;
                last=1;
                curr=i;
            }
            else{
                last++;
            }
        }
        
        count+=min(prev,last);

        return count;
}

int main(){

    string s="00110011";
    cout<<BinaryCount(s)<<"\n";
    return 0;
}