/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());
        ll ans=0;
        ll ex=0;
        bool exx=false;
        if(n>1 && a[1]== 1 && a[0]>1)exx=true;
        for(auto ele:a){
             if(ele==1){
                if(ex>0){
                    ex--;
                    ans++;
                }
                else if(exx){
                    ans++;
                    exx=false;
                }
             }
             else{
                ans+=ele;
                if(ele<4)continue;
                ex+=1+(ele-4)/2;
             }
        }
        if(ans<3)ans=0;
        cout<<ans<<nl;


        
    }
    return 0;
}