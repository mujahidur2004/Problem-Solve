#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
    // --------- Problem Logic Starts Here ---------
    int n,k;
    cin >> n>>k;
    string s;
    cin >> s;
    vector<int> v;
    int ok = 0;
    for (int i = 0; i < n; i++)
    {
 
        if (s[i] == '1')
        {
            v.push_back(i + 1);
            ok = 1;
        }
    }
    if (!ok)
    {
 
        cout << 0 << endl;
        continue;
    }
    
    int ans = 1;
    for (int i = 0; i < v.size() - 1; i++)
    {
 
        if (v[i + 1] - v[i] >= k)
            ans++;
    }
    
    cout << ans << endl;
}
        // --------- Problem Logic Ends Here -----------
    }
    