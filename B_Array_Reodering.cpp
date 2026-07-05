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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end(), [](int x, int y) {
            return x % 2 < y % 2;
        });
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i],2*a[j])>1){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}