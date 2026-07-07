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
    int temt=t;
    while (t--) {
        int n;
        cin >> n;
        int cnt=0;
        for (int i = 1; i<= n; i+=i) {
            cnt++;
            if(i+i>n)break;
           
        }
        cout<<"Case "<<temt-t<<": "<<cnt<<nl;

        
    }
    return 0;
}