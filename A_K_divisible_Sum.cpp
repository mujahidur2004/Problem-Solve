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
        
        long long n, k; cin >> n >> k;
    if (n>k) {
        if(n%k==0) cout<<1<<endl;
        else{
            cout<<2<<endl;
        }
    }else{
        cout<<(n+k-1)/n<<endl;
    }
        
    }
    return 0;
}