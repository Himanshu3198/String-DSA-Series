#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
	int count = 0;
	int end = s.length() - 1;

	int start = 0;
	while (start < end)
	{
		if (s[start] != s[end])
		{
			return false;
		}

		start++;
		end--;
	}
	return true;

}
	int main()
	{

		if(isPalindrome("aba")){
			cout<<"yes\n";
		}
		else{
			cout<<"no\n";
		}
		return 0;
	}
