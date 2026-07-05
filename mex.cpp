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
        int n,ele;
        cin >> n;
        vector<int> a(100,0);
        for (int i = 0; i < n; i++) {
            cin >> ele;
            a[ele]=1;
        }
        for (int i = 0; i < n; i++) {
            if(a[i]==0)
            {
                cout<<i<<endl;
                break;
            }
        }
       

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
        

       
    }
    return 0;
}