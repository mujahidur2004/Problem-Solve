#include <bits/stdc++.h>
using namespace std;

double taxOf(double Y) {
    const double PA = 12500;
    const double BASIC_LIMIT = 50000;
    const double HIGH_LIMIT = 150000;

    double tax = 0.0;

    // 1. Personal allowance reduction
    double reduction = 0.0;
    if (Y > 100000)
        reduction = (Y - 100000) / 2.0;

    double usedPA = max(0.0, PA - reduction);
    double lostPA = PA - usedPA;

    // Tax lost PA at 40%
    tax += lostPA * 0.40;

    // 2. Remaining taxable income
    double TI = Y - usedPA;
    if (TI < 0) TI = 0;

    // 20% band: 12500 → 50000 → width = 37500
    double basic_width = BASIC_LIMIT - PA;

    double basic_part = min(TI, basic_width);
    tax += basic_part * 0.20;
    TI -= basic_part;

    // 40% band: 50000 → 150000 → width = 100000
    double higher_width = HIGH_LIMIT - BASIC_LIMIT;

    double higher_part = min(TI, higher_width);
    tax += higher_part * 0.40;
    TI -= higher_part;

    // Additional 45%
    if (TI > 0)
        tax += TI * 0.45;

    return tax;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cout << fixed << setprecision(8);

    while (T--) {
        double X;
        cin >> X;

        // Binary search income that produces tax X
        double low = 0, high = 3e9;

        for (int i = 0; i < 100; i++) {
            double mid = (low + high) / 2.0;
            double t = taxOf(mid);
            if (t < X) low = mid;
            else high = mid;
        }

        cout << (low + high) / 2.0 << "\n";
    }
    return 0;
}
