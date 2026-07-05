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

        string s;
        cin >> s;
        int n = s.size();
        vector<int> v1(n + 1), v2(n + 1);
        for (int i = 0; i < n; i++)
        {
            v1[i + 1] = v1[i];
            if (s[i] == '2')
                v1[i + 1] += 1;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            v2[i] = v2[i + 1];
            if (s[i] == '1' || s[i] == '3')
                v2[i] += 1;
        }

        int mara = 0;
        for (int i = 0; i <= n; i++)
        {
            mara = max(mara, v1[i] + v2[i]);
        }
        cout << n - mara << endl;
    }

    return 0;
}