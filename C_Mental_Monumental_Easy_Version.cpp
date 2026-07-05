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
bool check(ll n, ll mid, multiset<ll> a)
{
    
    for (int i = mid - 1; i >= 0; i--) {
        if (a.find(i) != a.end()) {
            a.erase(a.find(i));
            continue;
        }
        auto it = a.lower_bound(2 * i + 1);
        if (it != a.end()) {
            a.erase(it);
            continue;
        }
        return 0;
    }
    return 1;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<ll>mls;
        int ele;

        for (int i = 0; i< n; i++) {
            cin >> ele;
            mls.insert(ele);
        }
        ll low = 1,high = n,res = 0;
        while(low<=high){
           ll mid=low+(high-low)/2;
            if(check(n,mid,mls)){
                res=mid;
                low=mid+1;
            }
            else high=mid-1;

        }
        cout<<res<<nl;

        
    }
    return 0;
}