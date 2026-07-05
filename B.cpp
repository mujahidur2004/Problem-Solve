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
        int n,res=-1,flag=0;
        cin >> n;
        vector<int> a(n+1,0);
        for (int i = 1; i <= n; i++) cin >> a[i];
        //sort(a.begin(),a.end());
        for(int i=n;i>0 && flag==0;i--)
        {
            for(int j=i;j>0;j--)
            {
                //if(a[i]==a[j])continue;
                int k=__gcd(a[i],a[j]);
                if(k==1)
                {
                    res=max(res,i+j);
                    flag=1;
                    break;
                    
                }
            }
            

        }
        cout<<res<<endl;
        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}