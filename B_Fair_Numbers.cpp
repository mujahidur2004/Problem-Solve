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
bool isFair(long long n) {
	long long num = n;
	while (num != 0) {
		int x = num % 10;
		if (x != 0 && n % x != 0) {
			
			return false;
		}
		num /= 10;
	}
	return true; 
}



int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        unsigned ll a;
        cin>>a;
        while(!isFair(a)){
            a++;
        }
        cout<<a<<nl;
        
    }
    return 0;
}