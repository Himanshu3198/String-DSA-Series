// implement Atoi
// Time & Space Complexity O(N) O(1)
#include<bits/stdc++.h>
using namespace std;


int ATOI(string str){

       int get_value,result=0;

       for(int i=0;i<str.length();i++){

           get_value=str[i]-'0';

           if(get_value>=0 && get_value<=9)
           {
                 result=result*10+get_value;
           }
           else{
               return -1;
           }
       }
       return result;

}


int main(){
    string str="geekforgeeks";
    cout<<ATOI(str)<<"\n";
}