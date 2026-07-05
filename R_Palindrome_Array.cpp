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
int palindrome(vector<ll>&a,int ind,int n){
    if(ind==(n/2)) return 1;
    if(a[ind]==a[n-1-ind]) return 1 * palindrome(a,ind+1,n);
    else return 0;
}

int main() {
    fast_io;

  
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        if(palindrome(a,0,n)) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

        
    
    return 0;
}