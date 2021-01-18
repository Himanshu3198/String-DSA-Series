#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="great responsibility";
    int count;
    for(int i=0;i<s.length();i++){
        count=1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j] && s[i]!='0'){
                count++;
                s[j]='0';

            }
        }
        if(count>1 && s[i]!='0'){
            cout<<s[i]<<" "<<count<<"\n";
        }
    }

    return 0;
}
