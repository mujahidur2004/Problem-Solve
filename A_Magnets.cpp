#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int ans=0,cnt=0;
    
        // --------- Problem Logic Starts Here ---------
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                cnt++;

            }
            // else
            // {
            //     cnt=0;
            // }
            // ans=max(ans,cnt);
            
        }

        cout<<cnt+1<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}