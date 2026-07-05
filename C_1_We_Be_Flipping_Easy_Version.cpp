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
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        int op=0;
        vector<int>ans;
        for(int i= n-1;i>=0;i--){
            ll ele=a[i];

            if(op%2==1)ele=(-1*ele);
            if(ele>0){
                op++;
                ans.push_back(i+1);
            }
        }
        cout<<ans.size()<<nl;
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<nl;
    }
    return 0;
}