#include<bits/stdc++.h>
#include<string>
using namespace std;

 void reverse(string s){

     if(s.length()==0){
         return;
     }
     cout<<"\tif coditon run\n";
     string ros=s.substr(1);
     cout<<ros<<"\n";
     reverse(ros);
     cout<<"before print\n";
     cout<<s[0]<<" ";
     cout<<"after print\n";
 }

int main(){
    reverse("ram");
    return 0;
}