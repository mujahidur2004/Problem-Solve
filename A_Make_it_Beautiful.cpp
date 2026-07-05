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
        vector<int> a;
        set<int>s;
        for (int i = 0; i < n; i++) 
        {
            int ele;
            cin >>ele;
            a.push_back(ele);
            s.insert(ele);
        }
        if(s.size()==1)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            sort(a.begin(),a.end());
            int f=0,l=n-1;
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    cout<<a[l]<<" ";
                    l--;
                }
                else{
                    cout<<a[f]<<" ";
                    f++;
                }

            }
            cout<<endl;
        }

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}