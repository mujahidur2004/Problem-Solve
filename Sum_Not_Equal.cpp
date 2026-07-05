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
        vector<pair<int,int>> a;
        set<int>st;

        for (int i = 0; i< n; i++) {
            int ele;
            cin>>ele;
            a.push_back({ele,i+1});
        }
        sort(a.begin(),a.end());
        if(a[0].first== a[n-1].first && a[0].first==0){
            cout<<-1<<nl;
            continue;
        }
        cout<<a[n-1].second<<" "<<a[n-2].second<<" "<<a[0].second<<nl;
        

        
    }
    return 0;
}