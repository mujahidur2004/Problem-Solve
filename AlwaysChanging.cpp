#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt1 = 0, cnt0 = 0;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                if (s[i] == '1')
                    cnt1++;
                else
                    cnt0++;
            }
        }

        if (cnt1 == cnt0)
        {
            cout << cnt1 + cnt0 << '\n';
        }
        else if (cnt1 > cnt0)
        {
            if (cnt1 - cnt0 == 1)
            {
                cout << cnt1 + cnt0 << '\n';
            }
            else if (cnt1 - cnt0 == 2)
            {
                if (s.front() == '0' || s.back() == '0')
                    cout << cnt1 + cnt0 + 1 << '\n';
                else
                    cout << -1 << '\n';
            }
            else if (cnt1 - cnt0 == 3)
            {
                if (s.front() == '0' && s.back() == '0')
                    cout << cnt1 + cnt0 + 2 << '\n';
                else
                    cout << -1 << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else 
        {
            if (cnt0 - cnt1 == 1)
            {
                cout << cnt1 + cnt0 << '\n';
            }
            else if (cnt0 - cnt1 == 2)
            {
                if (s.front() == '1' || s.back() == '1')
                    cout << cnt1 + cnt0 + 1 << '\n';
                else
                    cout << -1 << '\n';
            }
            else if (cnt0 - cnt1 == 3)
            {
                if (s.front() == '1' && s.back() == '1')
                    cout << cnt1 + cnt0 + 2 << '\n';
                else
                    cout << -1 << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}
