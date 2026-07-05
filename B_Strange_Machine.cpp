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
        int n,m;
        cin >> n>>m;
        vector<char> a(n);
        vector<int>b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++){
            cin >> b[i];
        
            int q=b[i],res=0;
            while(q>0)
            {
                for (int i = 0; i < n && q>0; i++)
                {
                    char ch=a[i];
                    if(ch=='B')
                    {
                        q=q/2;
                    }
                    else{
                        q=q-1;
                    }
                    res++;
                }

            }
            cout<<res<<endl;


        }
        

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}