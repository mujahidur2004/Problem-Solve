#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, r;
        cin >> s >> r;
        int ss = s.size();
        int rs = r.size();
        int sms = min(ss, rs);

        // Merge alternately
        for (int i = 0; i < sms; i++)
        {
            cout << s[i] << r[i];
        }

        // Append remaining part
        if (ss > rs)
        {
            for (int i = sms; i < ss; i++)
                cout << s[i];
        }
        else
        {
            for (int i = sms; i < rs; i++)
                cout << r[i];
        }

        cout << endl;
    }
}
