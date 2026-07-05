#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, n;
    cin >> s >> n;
    bool flag = true;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }

    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first; });

    for (int i = 0; i < n; i++)
    {
        if (s <= v[i].first)
        {
            flag = false;
        }
        if (s > v[i].first)
            s += v[i].second;
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}