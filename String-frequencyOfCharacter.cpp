#include <bits/stdc++.h>
using namespace std;

void find_freq(string str)
{

    int n = str.size();

    int freq[26];
    memset(freq, 0, sizeof(freq));

    for (int i = 0; i < n; i++)
    {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < n; i++)
    {

        if (freq[str[i] - 'a'] != 0)
        {

            cout << str[i] << "->" << freq[str[i] - 'a'] << "\n";

            freq[str[i] - 'a'] = 0;
        }
    }
}

int main()
{

    string str = "abcssadefgdcccc";

    find_freq(str);
    return 0;
}