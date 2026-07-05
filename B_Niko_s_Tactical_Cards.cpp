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
        ll  k=0;
        vector<ll> a(n),b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> a[i];
        for(int i=0;i<n;i++)
        {
            // ll A=k-a[i],B=b[i]-k;
            // if(A>B)k=A;
            // else k=B;
            k=max((k-a[i]),(b[i]-k));
        }
        
        
        cout << k<< endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}