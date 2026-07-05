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
        set<ll>a,b;
        for (int i = 0; i < n; i++)
        {
            ll ele;
            cin >>ele;
            a.insert(ele);

        } 
        for (int i = 0; i < n; i++)
        {
            ll ele;
            cin >>ele;
            b.insert(ele);

        } 

        if((a.size()+b.size())>3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}