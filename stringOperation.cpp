#include<bits/stdc++.h>

#include<string.h>
using namespace std;
int main()
{
	// for(int i='a' ;i<='z';i++)
	// {
	// 	char c=i;
	// 	cout<<c<<" ";
	// }
	//   int d=62;
	//   if(d>=20 && d<=50)
	//   {
	//   	cout<<"yes it present\t"<<d;
	//   }



	string str="12:00 AM 11:42 PM";
	str=str.substr(9);


	cout<<str[0]<<" "<<str[1]<<" "<<str[2];


}
