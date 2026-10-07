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

    int n;
    cin >> n;

    int x, y;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        mp[x]++;
        mp[y + 1]--;
    }
    int sum=0,res=0;
    for(auto ele :mp){
        sum+= ele.second;
        res=max(res,sum);
    }
    cout<<res<<nl;

    return 0;
}