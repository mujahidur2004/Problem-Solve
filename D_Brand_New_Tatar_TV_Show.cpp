#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define Endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> va(n);
        map<int, int> mp;
        for (auto &u : va)
        {
            cin >> u;
            mp[u]++;
        }
        sort(va.begin(), va.end());
        vector<int> v;
        v.push_back(va[0]);
        for (int i = 1; i < n; i++)
        {
            if (v.back() != va[i])
            {
                v.push_back(va[i]);
            }
        }
        n = v.size();
        vector<vector<int>> vv(n);
        int z = 0;
        vv[z].push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] <= k)
            {
                vv[z].push_back(v[i]);
            }
            else
            {
                z++;
                vv[z].push_back(v[i]);
            }
        }

        z++;
        bool flag = false;
        for (int i = 0; i < z; i++)
        {
            if (vv[i].size() == 1)
            {
                if (mp[vv[i][0]] % 2 == 0)
                {
                    flag = true;
                    break;
                }
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES" << Endl;
        else
            cout << "NO" << Endl;
    }
    return 0;
}