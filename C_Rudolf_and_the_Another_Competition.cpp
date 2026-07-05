#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;

        //vector<pair<pair<int, ll>, int>> vp; 
        vector<ll> a(m);
            for (int j = 0; j < m; j++) cin >> a[j];

            sort(a.begin(), a.end());

            ll time1 = 0, penalty1 = 0;
            int cnt1 = 0;

            for (int j = 0; j < m; j++) {
                if (time1 + a[j] > h) break;
                time1 += a[j];
                cnt1++;
                penalty1 += time1;
            }
            int rank=1;
        for (int i = 1; i < n; i++) {
            vector<ll> a(m);
            for (int j = 0; j < m; j++) cin >> a[j];

            sort(a.begin(), a.end());

            ll time = 0, penalty = 0;
            int cnt = 0;

            for (int j = 0; j < m; j++) {
                if (time + a[j] > h) break;
                time += a[j];
                cnt++;
                penalty += time;
            }
            if(cnt>cnt1){
                rank++;
            }
            else if(cnt==cnt1){
                if(penalty<penalty1) rank++;
            }


           
        }

        
        cout<<rank<<endl;
    }
    return 0;
}