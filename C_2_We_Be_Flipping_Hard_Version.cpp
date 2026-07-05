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
        bool pos=0,neg=0;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
            if(a[i]>0)pos=1;
            else neg=1;
        }
        if(pos && !neg){
            cout<<0<<nl<<nl;
            continue;
            
        }
        else if(neg && !pos){
            cout<<0<<nl<<nl;
            continue;
        }
        vector<ll> prep(n+1,0),pren(n+1,0),ans;
        for(int i=1;i<=n;i++){
            prep[i]=prep[i-1];
            pren[i]=pren[i-1];
            int ele = a[i-1];
            if(ele>0){
                prep[i]+=ele;
            }
            else{
                pren[i]+=ele;
            }

        }
        int op=0;
        for(int i=n-1;i>=0;i--){
            int ele=a[i];
            if(op%2==1)ele*=-1;
            if(ele>0){
                int diffp=prep[i+1]-pren[i+1];
                int diffn=prep[i+1]-pren[i+1]-(2*a[i]);
                if(op%2==1){
                    diffp=(-1*diffp);
                    diffn=(-1*diffn);

                }
                if(diffn>diffp){
                    op++;
                    ans.push_back(i+1);
                }

            }
        }
        cout<<ans.size()<<nl;
        for(auto ele :ans){
            cout<<ele<<" ";
        }
        cout<<nl;

        
    }
    return 0;
}