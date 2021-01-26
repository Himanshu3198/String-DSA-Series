// A C++ Program to find the longest common prefix 

// Time Complexity O(N*M);
// N = Number of strings
// M = Length of the largest string string 



#include<bits/stdc++.h> 
using namespace std; 

// A Function to find the string having the minimum  or min length of element
// length and returns that length 
int findMinLength(string arr[], int n) 
{ 
	int min = arr[0].length(); 

	for (int i=1; i<n; i++) 
		if (arr[i].length() < min) 
			min = arr[i].length(); 

	return(min); 
} 

// A Function that returns the longest common prefix 
// from the array of strings 
string commonPrefix(string arr[], int n) 
{ 
	int minlen = findMinLength(arr, n); 

	string result; // Our resultant string 
	char current; // The current character 

	for (int i=0; i<minlen; i++) 
	{ 
		// Current character (must be same 
		// in all strings to be a part of 
		// result) 
		current = arr[0][i]; 

		for (int j=1 ; j<n; j++) 
			if (arr[j][i] != current) 
				return result; 

		// Append to result 
		result.push_back(current); 
	} 

	return (result); 
} 


int main() 
{ 
	string arr[] = {"apple","apps","appe"};
	int n = sizeof (arr) / sizeof (arr[0]); 

	string ans = commonPrefix (arr, n); 

	if (ans.length()>0) 
		cout << "The longest common prefix is "
			<<" ["<< ans<<"]"; 
	else
		cout << "There is no common prefix"; 
	return 0; 
} 

