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
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int Max=INT_MIN;
            for(int j=i;j<n;j++)
            {
                Max=max(Max,a[j]);
                if(a[j]>=Max)cnt++;
                
                else break;

            }
        }
        cout<<cnt<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}