#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    string s;
    cin>>s;
    int sum=0,cnt=1;
    
    for(int i=0;i<s.size();i++)
    {
        int ele=s[i]-'0';
        sum+=ele;
    }
    while(sum>9)
    {
        s=to_string()
    }
    cout<<sum<<endl;
    // int t ;
    // cin >> t;
    // while (t--) {
    //     // --------- Problem Logic Starts Here ---------
    //     int n;
    //     cin >> n;
    //     vector<int> a(n);
    //     for (int i = 0; i < n; i++) cin >> a[i];

    //     int sum = 0;
    //     for (auto x : a) sum += x;
    //     cout << sum << endl;
    //     // --------- Problem Logic Ends Here -----------
    // }
    return 0;
}