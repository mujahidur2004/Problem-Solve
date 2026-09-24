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
int k;
const int N = 1e5+10;
int DP[N];
int a[N];
int func(int i){
    if(i==0) return 0;
    if(DP[i] != -1) return DP[i];
    int cost = INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j>=0)
            cost = min(cost,func(i-j)+abs(a[i]-a[i-j]));

    }
    return DP[i]=cost;

}

int main()
{
    fast_io;
    memset(DP,-1,sizeof(DP));

    int n ;
    cin >> n >> k;

    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout<<func(n-1)<<nl;;

    return 0;
}