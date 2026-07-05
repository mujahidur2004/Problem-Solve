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
int Reverse(vector<int>&a,int n){
    if(n<0) return 0;
    cout<<a[n]<<" ";
    Reverse( a,n-2);
    return 0;
}

int main() {
    fast_io;

    
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        if(n%2==0) Reverse(a,n-2);
        else Reverse(a,n-1);
        cout<<nl;

        
    
    return 0;
}