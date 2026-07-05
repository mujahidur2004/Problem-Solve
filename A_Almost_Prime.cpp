#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> prime_count(n + 1, 0);
    
    // Count distinct prime divisors for each number
    for (int i = 2; i <= n; i++) {
        if (prime_count[i] == 0) { // i is prime
            for (int j = i; j <= n; j += i) {
                prime_count[j]++;
            }
        }
    }
    
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (prime_count[i] == 2) count++;
    }
    
    cout << count << endl;
    return 0;
}
