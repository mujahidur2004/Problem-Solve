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
    int r, c;
    cin >> r >> c;

    vector<vector<char>> graph(r, vector<char>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> graph[i][j];
        }
    }

    bool ck = true;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (graph[i][j] != 'W')
                continue;

            // Check all four directions for S
            if (i + 1 < r && graph[i + 1][j] == 'S')
                ck = false;

            if (i - 1 >= 0 && graph[i - 1][j] == 'S')
                ck = false;

            if (j + 1 < c && graph[i][j + 1] == 'S')
                ck = false;

            if (j - 1 >= 0 && graph[i][j - 1] == 'S')
                ck = false;

            // Put D in all adjacent empty cells
            if (i + 1 < r && graph[i + 1][j] == '.')
                graph[i + 1][j] = 'D';

            if (i - 1 >= 0 && graph[i - 1][j] == '.')
                graph[i - 1][j] = 'D';

            if (j + 1 < c && graph[i][j + 1] == '.')
                graph[i][j + 1] = 'D';

            if (j - 1 >= 0 && graph[i][j - 1] == '.')
                graph[i][j - 1] = 'D';
        }
    }

    if (!ck)
    {
        cout << "No" << nl;
    }
    else
    {
        cout<<"Yes"<<nl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << graph[i][j];
            }
            cout << nl;
        }
    }
    cout<<nl;
    return 0;
}