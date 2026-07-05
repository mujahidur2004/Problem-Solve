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
        int m;
        cin>>m;
        vector<ll> second_element;
        ll first_element=LLONG_MAX;
        while(m--)
        {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        second_element.push_back(a[1]);
        first_element=min(first_element,a[0]);



        }
        
        sort(second_element.begin(),second_element.end());
        ll sum = 0;
        for (auto x : second_element) sum += x;
        ll res=sum+first_element-second_element[0];
        cout << res<< endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}