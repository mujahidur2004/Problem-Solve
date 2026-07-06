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
        vector<ll> a(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i != n - 1)
                mp[a[i]]++;
        }
        int f = 0, one = 0, two = 0, three = 0, i = 0;
        for (; i < n - 1; i++)
        {
            if (a[i] == 1)
                one++;
            else if (a[i] == 2)
                two++;
            else
                three++;
            if (one >= two + three)
            {
                int tem3=0,temo=0,temf=0;
                for(int j=i+1;j<n-1;j++){
                    if(a[j]==3)tem3++;
                    else temo++;
                    if(tem3<=temo){
                        temf=1;
                        break;
                    }
                }
                if(temf){
                    f=1;
                    break;
                }
            }
        }

        if (!f)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}