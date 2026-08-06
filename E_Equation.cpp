#include <bits/stdc++.h>
using namespace std;

int main() {
    double c;
    cin >> c;

    double l = 0, r = 100000;

    while (r - l > 1e-7) {
        double mid = (l + r) / 2.0;

        if (mid * mid + sqrt(mid) < c)
            l = mid;
        else
            r = mid;
    }

    cout << fixed << setprecision(15) << l << '\n';

    return 0;
}