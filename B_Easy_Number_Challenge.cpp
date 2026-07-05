#include <bits/stdc++.h>
using namespace std;

const int MAX = 100*100*100;
const int MOD = 1073741824;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> divisors(MAX + 1, 0);

   []
    for(int i = 1; i <= MAX; i++) {
        for(int j = i; j <= MAX; j += i) {
            divisors[j]++;
        }
    }

    long long sum = 0;
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++) {
            for(int k = 1; k <= c; k++) {
                sum += divisors[i*j*k];
                if(sum >= MOD) sum -= MOD;
            }
        }
    }

    cout << sum << "\n";
    return 0;
}]