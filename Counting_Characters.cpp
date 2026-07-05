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
        string s;
        int n;
        cin >> n;
        cin>>s;
        int a=0;

        for (int i = 0; i< n; i++) {
            if(s[i]=='a')a++;
            
        }
        cout<<a<<" "<<n-a<<nl;

        
    }
    return 0;
}