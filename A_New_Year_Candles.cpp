#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int cur = a;      
    int burned = 0;   
    int ans = 0;      

    while (cur > 0) {
        
        cur--;
        ans++;
        burned++;

        
        if (burned >= b) {
            int newCandle = burned / b;
            burned %= b;
            cur += newCandle;
        }
    }

    cout << ans << "\n";
    return 0;
}
