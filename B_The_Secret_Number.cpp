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
        ll n;
        cin >> n;
        string s=to_string(n);
        ll cur=10;
        vector<ll> a;
        for (int i = 0; i < s.size(); i++){
            if(n % (cur+1)==0){
                a.push_back(n/(cur+1));
                

            }
            cur*=10;
        } 
        sort(a.begin(),a.end());
        cout<<a.size()<<endl;

        
        for (auto x : a)cout<<x<<" ";
        cout <<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}