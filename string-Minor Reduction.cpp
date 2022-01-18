#include <bits/stdc++.h>
using namespace std;

void solve()
{
   
      string s;
	cin >> s;
	int n = s.size();
	int choose = -1;
	for (int i = 0; i < n - 1; i++)
	{
		int x = s[i] - '0';
		int y = s[i + 1] - '0';
		if (x + y > 9)
			choose = i;
	}
	if (choose == -1)
	{
		choose = 0;
	}
	string ans = "";
	for (int i = 0; i < choose; i++)
		ans += s[i];
	int x = s[choose] - '0';
	int y = s[choose + 1] - '0';
	ans += to_string(x + y);
	for (int i = choose + 2; i < n; i++)
		ans += s[i];

    cout<<ans<<"\n";    
  
}


int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}
