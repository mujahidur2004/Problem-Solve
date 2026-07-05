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

    
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        int cnt=1;
        for(int i=0;i<n;i++){
            int j=i;
            while(a[j]!=i+1){
                //cout<<j<<" "<<cnt<<" ";
                cnt++;
                j=a[j]-1;

                if(cnt>3)break;
            }
            if(cnt==3){
                cout<<"YES"<<nl;
                return 0;
            }
            cout<<nl;
            cnt=1;

        }
        cout<<"NO"<<nl;



        
    
    return 0;
}