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
        sort(a.begin(),a.end());
        int cnt=0;
        bool f=1;
        while(f){
            bool ck=1;
            for(int i=1;i<n;i++){
                if(a[i]>a[0]){
                    a[i]=a[i]/2;
                    ck=0;
                    cnt++;
                }
                else if(a[i]<a[0]){
                    a[0]=a[0]/2;
                    ck=0;
                    cnt++;
                }
            }
            if(ck)break;

        }
        cout<<cnt<<nl;

        
    }
    return 0;
}