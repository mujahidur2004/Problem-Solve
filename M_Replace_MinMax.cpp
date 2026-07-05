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
    
        int n;
        cin >> n;
        vector<int> a(n);

        int Mini=-1,Maxi=-1;
        int Max=INT_MIN,Min=INT_MAX;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
            if(a[i]>Max){
                Maxi=i;
                Max=max(Max,a[i]);
            }
            if(a[i]<Min){
                Mini=i;
                Min=min(Min,a[i]);
            }
        }
        swap(a[Mini],a[Maxi]);
        
        for(auto ele : a){
            cout<<ele<<" ";
        }
        cout<<nl;

        
    
    return 0;
}