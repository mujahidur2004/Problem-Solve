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

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        vector<ll> a;
        int n = s.size();
        ll j = 1;

        for(int i = n-1; i >= 0; i--){
            if(s[i] != '0'){
                ll ele = (s[i]-'0') * j;
                a.push_back(ele);
            }
            j=j*10;
        }

        cout << a.size() << nl;

        for(auto ele : a){
            cout << ele << " ";
        }

        cout << nl;
    }

    return 0;
}