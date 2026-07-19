/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        int cnt = 0;
        int cnta = 0, cntb = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                cnt++;
            if (b[i] == 0)
                cntb++;
            if (a[i] == 1)
                cnta++;
        }
        if (cnt == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (cnta == 0 || cntb == 0)
        {
            cout << -1 << endl;
            continue;
        }
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1 && b[i] == 0)
                cnt++;
        }
        if(cnt > 0)
        {
            if(cnt % 2)
            {
                cout<<1<<endl;
            }
            else cout<<2<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

    return 0;
}