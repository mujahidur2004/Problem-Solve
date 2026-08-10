#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    const int N = 100000000; // 1e8
    vector<int> prime;

    bitset<100000001> visit; // compile-time constant size
    visit.reset();           // optional, all bits 0 initially

    for (int i = 2; i * 1LL * i <= N; i++) {
        if (!visit[i]) {
            prime.push_back(i);
            for (ll j = 1LL * i * i; j <= N; j += i) {
                visit[j] = 1;
            }
        }
    }

    // push remaining primes after sqrt(N)
    for (int i = sqrt(N) + 1; i <= N; i++) {
        if (!visit[i]) prime.push_back(i);
    }

    cout << "Number of primes up to " << N << ": " << prime.size() << "\n";
    cout << "First 10 primes: ";
    for (int i = 0; i < 10 && i < prime.size(); i++) cout << prime[i] << " ";
    cout << "\n";

    return 0;
}