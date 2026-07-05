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
        int sum1=0,sum2=0;
        for(int i=n;i<=k;i=i*n)
        {
            if(i%2==0)
            {
                sum1+=i;
            }
            else{
                sum2+=i;
            }
        }
        if(sum1>=sum2)
        {
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;

        // vector<int> a(n);
        // for (int i = 0; i < n; i++) cin >> a[i];

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // // --------- Problem Logic Ends Here -----------
    }
    return 0;
}