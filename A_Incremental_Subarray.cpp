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
        int n,m;
        cin >> n>>m;
        int flag=0;
        vector<int> a(m);
        for (int i = 0; i < m; i++) 
        {cin >> a[i];}
        for (int i = m-1; i >0; i--)
        {
            if(a[i]==1)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<(n-a[m-1]+1)<<endl;
        }

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}