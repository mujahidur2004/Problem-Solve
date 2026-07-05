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
        int n,m,k,H,sum=0;
        cin >> n>>m>>k>>H;
        vector<int> a(n);
        set<int>s;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i==j)continue;
                int e=abs(k*(i-j));
                s.insert(e);


            }
        }
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            int hight=abs(H-a[i]);
            for(auto ele:s)
            {
                if(ele==hight){
                    sum++;
                    break;
                }
                
            }
            
        }
        
        cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}