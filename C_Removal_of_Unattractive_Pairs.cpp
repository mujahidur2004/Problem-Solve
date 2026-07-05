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
        map<char,int >mp;
        for (int i = 0; i < n; i++)
        {
            char ele;
            cin>>ele;
            mp[ele]++;
        } 
        int sum = -1;
        for (auto x : mp){
            sum=max(sum,x.second);
            
        } 
        cout<<max(n%2,2*sum-n)<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}