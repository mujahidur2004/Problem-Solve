/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        set<char> st, st2;
        string s1 = to_string(n);
        for (int j = 0; j < s1.size(); j++)
        {
            st2.insert(s1[j]);
        }
        if (st2.find('0') != st2.end())
        {
            cout << 10 << nl;
            continue;
        }

        for (int i = 2; i < 1e4 + 10; i++)
        {
            ll ans = n * i;
            st.clear();
            string s = to_string(ans);
            for (int j = 0; j < s.size(); j++)
            {
                st.insert(s[j]);
            }
            st2.clear();
            string s1 = to_string(i);
            for (int j = 0; j < s1.size(); j++)
            {
                st2.insert(s1[j]);
            }
            if (st.size() <= 2 && st2.size() <= 2)
            {
                cout << i << nl;
                break;
            }
        }
    }

    return 0;
}