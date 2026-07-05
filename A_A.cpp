#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    int n;
    cin >> n;

    vector<int> next(n + 1, -1);
    int front = -1;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x == -1) {
            front = i;           
        } else {
            next[x] = i;         
        }
    }

    
    int cur = front;
    while (cur != -1) {
        cout << cur << " ";
        cur = next[cur];
    }
    cout << "\n";

    return 0;
}
