#include<bits/stdc++.h>
using namespace std;

int main(){

    string str="geeksforgeeksforgeeks";
    string str1="geeks";

    size_t found=str.find(str1);

    if(found !=string::npos)
    cout<<"first occur\t"<<found<<"\n";

    char arr[]="geeks";
    found=str.find(arr,found+1);

    if(found!=string::npos)
        cout<<"next occurance\t"<<found<<"\n";

        return 0;



}