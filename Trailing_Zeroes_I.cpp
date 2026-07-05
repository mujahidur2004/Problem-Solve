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
    ll res = 1;

    for (int p : primes) {
        if ((ll)p * p > n) break;

        int cnt = 0;
        while (n % p == 0) {
            n /= p;
            cnt++;
        }
        if (cnt > 0) {
            res *= (cnt + 1);
        }
    }

    if (n > 1) res *= 2;

    return res;
}

int main() {
    fast_io;

    sieve();

    int t;
    cin >> t;

    for (int j = 1; j <= t; j++) {
        ll n;
        cin >> n;

        cout << "Case " << j << ": " << countDivisors(n) - 1 << nl;
    }

    return 0;
}