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
         ll int n;
        cin >> n;
        set<ll> a;
        for (int i = 0; i < n; i++) 
        {
            ll ele;

            cin >>ele;
            a.insert(ele);

        }

        //sort(a.begin(),a.end());
        int flag=0,res;
        for(int i=2;i<=2e18 && flag==0;i++)
        {
            for(ll ele:a)
            {
                if(__locale_changed(i,ele)==1) 
                {
                    flag=1;
                    res=i;
                    break;
                }
            }

        }
        if(flag)cout<<res<<endl;
        else cout<<-1<<endl;

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}