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
        vector<pair<int,int>> a(n);
        int res=0;
        int ele;
        for (int i = 0; i< n; i++) {
            cin >> ele;
            a[i]={ele,i};
            
        }
        cout<<res<<nl;
        


        
    }
    return 0;
}