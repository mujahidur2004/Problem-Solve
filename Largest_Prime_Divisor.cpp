#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

const int MAX = 1e6;
vector<int> primes;
bool isPrime[MAX + 1];

void sieve() {
    for (int i = 2; i <= MAX; i++) isPrime[i] = true;

    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
}

ll countDivisors(ll n) {
    ll res = -1;

    for (int p : primes) {
        if ((ll)p * p > n) break;

        int cnt = 0;
        while (n % p == 0) {
            res=max(res,1LL*p);
        }
        
    }

    

    return res;
}

int main() {
    fast_io;

    sieve();

     ll n;
     cin>>n;
     while(n){
        cout<<countDivisors(n)<<nl;
     }

    return 0;
}