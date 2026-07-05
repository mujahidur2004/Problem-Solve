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

    int t;
    cin >> t;
    while (t--) {
        vector<int>a(5);
        cin>>a[0]>>a[1]>>a[3]>>a[4];
        a[2]=a[0]+a[1];
        int ans=0;
        for(int i=0;i<5;i++){
            if(a[i+2]==(a[i]+a[i+1])){
                ans++;
            }
        }
        a[2]=a[4]-a[3];
        int cnt=0;
        for(int i=0;i<5;i++){
            if(a[i+2]==(a[i]+a[i+1])){
                cnt++;
            }
        }

        cout<<max(ans,cnt)<<nl;
    }
    return 0;
}