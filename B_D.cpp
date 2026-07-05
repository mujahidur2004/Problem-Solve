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
        for (int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            if(i==0)
            {
                a[i]=ele;

            }
            else{
                a[i]=a[i-1]+ele;
            }
        }

        int sum = 0;
        int an,x;
        for(int i=0;i<n-1;i++)
        {
            
                an=a[i]&a[j];
                x=a[i]^a[j];
                if(an>=x)
                {
                    sum++;
                }
            
        }
        cout<<sum<<endl;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}