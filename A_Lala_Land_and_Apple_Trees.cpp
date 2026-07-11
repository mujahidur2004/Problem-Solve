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
    vector<pair<int,int>> pos,neg;
    cin >> t;
    while (t--) {
        int ind,val;
        cin>>ind>>val;
        if(ind>=0){
            pos.push_back({ind,val});

        }
        else neg.push_back({ind,val});

        
    }
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());
    reverse(neg.begin(),neg.end());
    int ps=pos.size(),ns=neg.size();
    ll ans=0;
    int i=0;
    for(;i<(min(ns,ps));i++){
        ans+=pos[i].second;
        ans+=neg[i].second;

    }
    if(ps>ns)ans+=pos[i].second;
    else if(ps<ns)ans+=neg[i].second;
    cout << ans<<nl;
    return 0;
}