#include<bits/stdc++.h>
#include<string>
using namespace std;

void isPalindrome(string s){
	int count=0;
    int l=s.length()-1;
      
      int start=0;
      while(l>1){
      	if(s[start++]==s[l--])
      		count=1;  
		
	  }
	  if(count){
	  	cout<<"yes palindrome\n";
	  }
	  else{
	  	cout<<" its not palindrome\n ";
	  }
	  
   

}
int main(){

    isPalindrome("abc");
    return 0;
}
