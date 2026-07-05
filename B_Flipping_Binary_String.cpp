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
        string s;
        cin>>s;
        vector<ll> Zero,One;

        for (int i = 0; i< n; i++) {
            if(s[i]=='0')Zero.push_back(i+1);
            else One.push_back(i+1);
        }
        if(Zero.size()%2==1){
            cout<<Zero.size()<<nl;
            for(auto ele:Zero){
                cout<<ele<<" ";
            }
            cout<<nl;
        }
        else if(One.size()%2==0){
            cout<<One.size()<<nl;
            for(auto ele:One){
                cout<<ele<<" ";
            }
            cout<<nl;
        }
        else{
            cout<<-1<<nl;
        }

        
    }
    return 0;
}