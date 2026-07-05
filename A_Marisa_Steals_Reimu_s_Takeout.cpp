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
        int res=0,sum=0,two=0,one=0;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
            
            if(a[i]==0 || a[i]==3){
                res++;
                continue;
            }
            if(a[i]==2){
                two++;
            }
            else {
                one++;
            }
        }
        res+=(min(one,two));
        if(two>one){
            res+=(((two-one)/3));
        }
        else{
            res+=((one-two)/3);
        }
        
        cout<<res<<nl;

        
    }
    return 0;
}