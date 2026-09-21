#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int a, b, c;
        cin >> n >> a >> b >> c;
        int cnta = 1;
        vector<int> va, vb, vc;
        map<int, int> mp;
        va.push_back(1);
        vb.push_back(1);
        vc.push_back(1);
        for (int i = 2; i <= a; i++)
        {
            if (n % i == 0)
            {
                cnta++;
                va.push_back(i);
            }
        }
        int cntb = 1;
        for (int i = 2; i <= b; i++)
        {
            if (n % i == 0)
            {
                cntb++;
                vb.push_back(i);
            }
        }
        int cntc = 1;
        mp[1] = 1;
        for (int i = 2; i <= c; i++)
        {
            if (n % i == 0)
            {
                cntc++;
                vc.push_back(i);
                mp[i]++;
            }
        }
        int res = 0;
        for (int i = 0; i < va.size(); i++)
        {
            for (int j = 0; j < vb.size(); j++)
            {
                long long mul = 1LL * va[i] * vb[j];

                if (n % mul == 0)
                {
                    int need = n / mul;

                    if (mp[need])
                        res++;
                }
            }
        }
        cout << res << endl;
    }
}