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
        string s;

        cin >> s;
        bool ck = 1;
        for (int i = 1; i < n-1; i++)
        {
            if (s[i] != s[i - 1])
            {
                ck = 0;
            }
        }
        if(ck  ||  n<3){
            cout<<"Bob"<<nl;
        }
        else{
           cout<<"Alice"<<nl;
        }
    }

    return 0;
}