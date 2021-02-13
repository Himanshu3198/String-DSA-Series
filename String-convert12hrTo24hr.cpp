#include <bits/stdc++.h>
using namespace std;
void print24(string str)
{

    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    cout << h1 << " " << h2 << "\n"
         << hh << "\n";

    // if time is in am

    if (str[6] == 'A')
    {
        if (hh == 12)
        {
            cout << "00";
            for (int i = 0; i <= 7; i++)
            {
                cout << str[i];
            }
        }
        else
        {
            for (int i = 0; i <= 7; i++)
            {
                cout << str[i];
            }
        }
    }
    // if time in pm

    else
    {
        if (hh == 12)
        {
            cout << "12";
            for(int i=2;i<=7;i++){
                cout<<str[i];
            }
        }
        else{
            hh=hh+12;
            cout<<hh;
            for(int i=2;i<=7;i++){
                cout<<str[i];
            }
        }
    }
}

int main()
{
    string str = "07:05:PM";
    print24(str);
    return 0;
}