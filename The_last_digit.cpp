#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
ll Bi_Ex( int b ,int e) {
    ll ans = 1LL;
    while(e > 0){
        if(e & 1){
            ans = ((ans % 10) * (b % 10) )% 10;
        }
        b = ((b % 10 ) * (b % 10) )% 10;
        e >>= 1;

    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin>>a>>b;
        cout<<Bi_Ex(a,b)<<nl;   
    }
    return 0;
}