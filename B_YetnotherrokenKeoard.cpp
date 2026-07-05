#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        vector<int> a, b; 

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b') {
                if (!a.empty()) a.pop_back();
            }
            else if (s[i] == 'B') {
                if (!b.empty()) b.pop_back();
            }
            else if (s[i] >= 'a' && s[i] <= 'z') {
                a.push_back(i);
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                b.push_back(i);
            }
        }

        int inda = 0, indb = 0;

       
        while (inda < a.size() && indb < b.size()) {
            if (a[inda] < b[indb]) cout << s[a[inda++]];
            else cout << s[b[indb++]];
        }

        
        while (inda < a.size()) cout << s[a[inda++]];

        
        while (indb < b.size()) cout << s[b[indb++]];

        cout << '\n';
    }

    return 0;
}
