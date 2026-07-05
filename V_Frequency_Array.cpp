/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main() {
    fast_io;

    int n,m,ele;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>ele;
        mp[ele]++;

    }
    for(int i=1;i<=m;i++){
        cout<<mp[i]<<nl;
    }
    return 0;
}