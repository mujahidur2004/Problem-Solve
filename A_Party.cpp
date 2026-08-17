#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

int n;
vector<int> parent;

int dfs(int employee)
{
    if (parent[employee] == -1)
        return 1;

    return 1 + dfs(parent[employee]);
}

int main()
{
    fast_io;

    cin >> n;

    parent.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> parent[i];
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, dfs(i));
    }

    cout << ans << nl;

    return 0;
}
