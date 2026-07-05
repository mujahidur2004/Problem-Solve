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
        vector<int> a(n);
        int c=0,b=0,f=0;
        int Max=INT_MIN;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
            if(a[i]==n){
                c=i;
            }
            
        }
        swap(a[0],a[c]);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<nl;

        
    }
    return 0;
}