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
        vector<int> v;
        // for (int i = 0; i < n; i++) cin >> a[i];

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);
            if(ele%2==1)
            {
                a++;
            }
            else b++;
        }
        if(a>0 && b>0)
        {
            sort(v.begin(),v.end());
            for(int ele:v)
            {
                cout<<ele<<" ";
            }
        }
        else
        {
            for(int ele:v)
            {
                cout<<ele<<" ";
            }

        }
        cout<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}