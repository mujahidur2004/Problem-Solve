#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        string s;
        cin >> s;
        int ans = 0;
        map<int, char> possiblec;
        possiblec[0] = '0';

        possiblec[1] = '0';
        possiblec[2] = '1';
        possiblec[3] = '1';
        int ck = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?' && possiblec[i % 4] != s[i])
            {
                ck = 0;
                break;
            }
        }
        ans += ck;
        ck = 1;
        possiblec[0] = '0';

        possiblec[1] = '1';
        possiblec[2] = '1';
        possiblec[3] = '0';

        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?' && possiblec[i % 4] != s[i])
            {
                ck = 0;
                break;
            }
        }
        ans += ck;
        possiblec[0] = '1';

        possiblec[1] = '0';
        possiblec[2] = '0';
        possiblec[3] = '1';
        ck = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?' && possiblec[i % 4] != s[i])
            {
                ck = 0;
                break;
            }
        }
        ans += ck;
        possiblec[0] = '1';

        possiblec[1] = '1';
        possiblec[2] = '0';
        possiblec[3] = '0';
        ck = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?' && possiblec[i % 4] != s[i])
            {
                ck = 0;
                break;
            }
        }
        ans += ck;
        cout<<ans<<endl;
    }
}