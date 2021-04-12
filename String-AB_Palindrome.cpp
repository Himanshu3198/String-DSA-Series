#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a, b, n;
		cin>>a>>b;
		n=a+b;
		string s;
		cin>>s;
		for(int i=0; i<n; i++){
			if(s[i]=='0')a--;
			else if(s[i]=='1')b--;
		}
		for(int i=0; i<n; i++){
			if(s[i]=='?'&&s[n-1-i]!='?'){
				if(s[n-1-i]=='0')a--;
				else b--;
				s[i]=s[n-1-i];
			}
		}
		if(n%2!=0&&s[n/2]=='?'){
			if(a%2==1){
				s[n/2]='0'; a--;
			}
			else {
				s[n/2]='1'; b--;
			}
		}
		for(int i=0; i<n; i++){
			if(s[i]=='?'){
				if(a>=2){
					s[i]=s[n-1-i]='0'; a-=2;
				}
				else{
					s[i]=s[n-1-i]='1'; b-=2;
				}
			}
		}
		if(a!=0 || b!=0){
			cout<<-1<<'\n'; continue;
		}
		bool ans=true;
		for(int i=0; i<n; i++){
			if(s[i]!=s[n-1-i]){
				ans=false; break;
			}
		}
		if(!ans){
			cout<<-1<<'\n';
		}
		else cout<<s<<'\n';
	}
}
