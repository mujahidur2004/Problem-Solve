#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    string s;
    cin >> s;

    bool space = false;

    for (int i = 0; i < s.size(); ) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            space = true;
            i += 3;
        } else {
            if (space) {
                cout << " ";
                space = false;
            }
            cout << s[i];
            i++;
        }
    }

    return 0;
}
