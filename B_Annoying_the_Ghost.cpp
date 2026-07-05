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
        vector<int>b;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        int ele;
        for (int i = 0; i< n; i++) {
            cin >> ele;
            b.push_back(ele);
        }
        ll res=0;
        bool f=1;
        for(int i=0;i<n;i++){
            if(a[i]<=b[i])continue;
            int ind =-1;
            for(int j=i+1;j<n;j++){
                if(b[i]>=a[j]){
                    ind=j;
                    break;
                }
            }
            if(ind==-1){
                f=0;
                break;
            }
            for(int j=ind;j>i;j--){
                swap(a[j],a[j-1]);
                res++;
            }

        }
        if(f==0){
            cout<<-1<<nl;
    
        }
        else{
            cout<<res<<nl;
        }


        
    }
    return 0;
}