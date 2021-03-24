#include<bits/stdc++.h>
#include<string>
using namespace std;

 void reverse(string s){

     if(s.length()==0){
         return;
     }
     string ros=s.substr(1);
     cout<<ros<<"\n";
     reverse(ros);
    
 }

int main(){
    reverse("ram");
    return 0;
}
