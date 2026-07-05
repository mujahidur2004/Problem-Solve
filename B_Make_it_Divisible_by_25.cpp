#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int solve(string s, string target){
    int cnt = 0;
    int j = 1;

    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == target[j]){
            j--;
            if(j < 0) return cnt;
        }
        else{
            cnt++;
        }
    }
    return 1e9;
}

int main() {
    fast_io;

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int ans = min({
            solve(s,"00"),
            solve(s,"25"),
            solve(s,"50"),
            solve(s,"75")
        });

        cout << ans << '\n';
    }
}