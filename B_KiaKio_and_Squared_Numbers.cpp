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

int ck(string s)
{
    set<int> st;

    while (true)
    {
        int ns = 0;

        for (int i = 0; i < s.size(); i++)
        {
            int cr = s[i] - '0';
            ns += cr * cr;
        }

        if (ns == 1)
            return true;

        if (st.count(ns))
            return false;

        st.insert(ns);

        s = to_string(ns);
    }
}

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<string, int> mp;

        string s, ns;

        for (int i = 0; i < n; i++)
        {
            cin >> s;

            ns = "";

            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] != '0')
                {
                    ns.push_back(s[j]);
                }
            }

            mp[ns]++;
        }

        int cnt = 0;

        for (auto ele : mp)
        {
            cnt = max(cnt, ele.second);
        }

        int ans = (cnt * (cnt - 1)) / 2;

        int cnt2 = 0;

        for (auto ele : mp)
        {
            if (ck(ele.first))
            {
                cnt2 += ele.second;
            }
        }

        int ans2 = (cnt2 * (cnt2 - 1)) / 2;

        cout << max(ans2, ans) << nl;
    }

    return 0;
}