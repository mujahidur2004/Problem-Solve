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
        int  n,flag=0;
        cin >> n;
        vector<long long> a;
        long long dif;
        for (int i = 0; i < n; i++)
        {
            long long ele;
            cin>>ele;
            a.push_back(ele);

            if(i==0)
            {
                dif=LLONG_MAX;
            }
            else
            {
                long long dife=a[i]-a[i-1];
                if(dife<0)flag=1;
                dif=min(dif,dife);
            }
            

        } //cin >> a[i];

       if(flag)cout<<0<<endl;
       else{
        cout<<(dif)/2+1<<endl;
       }
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}