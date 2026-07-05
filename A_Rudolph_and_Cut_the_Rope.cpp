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
        int n;
        cin >> n;
        int res=0;
        int a,b;
        while(n--)
        {
            cin>>a>>b;
            if(a>b)res++;

        }
        cout << res<< endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}