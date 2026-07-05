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
    cin>>n;
        string a, b, c, d;
        cin >> a >> b;
        c = a, d = b;

        int f = 1;
        
        for (int i = 0; i + 1 < a.size(); i++)
        {
            if (a[i] == b[i])
                continue;
            int a1 = a[i] - '0';
            int a2 = a[i + 1] - '0';
            if (b[i] == '0')
            {
                int c = a1 & a2;
                if (c == 1)
                {
                    f = 0;
                    break;
                }
                else
                {
                    a[i] = '0';
                    a[i + 1] = '0';
                }
            }
            else
            {
                int c = a1 | a2;
                if (c == 0)
                {
                    f = 0;
                    break;
                }
                else
                {
                    a[i] = '1';
                    a[i + 1] = '1';
                }
            }
        }
        if (a[n - 1] != b[n - 1])
            f = 0;

        if (f)
        {
            cout << "Yes" << nl;
            continue;
        }
        a = c, b = d;
         f = 1;
        
        for (int i = n - 1; i >=1; i--)
        {
            if (a[i] == b[i])
                continue;
            int a1 = a[i] - '0';
            int a2 = a[i - 1] - '0';
            if (b[i] == '0')
            {
                int c = a1 & a2;
                if (c == 1)
                {
                    f = 0;
                    break;
                }
                else
                {
                    a[i] = '0';
                    a[i - 1] = '0';
                }
            }
            else
            {
                int c = a1 | a2;
                if (c == 0)
                {
                    f = 0;
                    break;
                }
                else
                {
                    a[i] = '1';
                    a[i - 1] = '1';
                }
            }
        }
        if (a[0] != b[0])
            f = 0;
        if(f){
            cout<<"Yes"<<nl;
            continue;
        }
        cout << "No" << nl;
    }
    return 0;
}