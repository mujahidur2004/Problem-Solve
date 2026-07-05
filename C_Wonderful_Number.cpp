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
bool Palindrome(int n) {
    bitset<32> b(n);

    int left = -1;

    
    for (int i = 31; i >= 0; i--) {
        if (b[i] == 1) {
            left = i;
            break;
        }
    }

    
    for (int right = 0; right < left; right++, left--) {
        if (b[right] != b[left])
            return false;
    }

    return true;
}
bool Odd(int n){
    if(n%2==1) return 1;
    else return 0;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    if(Odd(t) && Palindrome(t)) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    
    return 0;
}