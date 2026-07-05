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

    
        int n,x;
        cin >> n>>x;
       vector<pair<int,int>> a(n);
        int ele;
    // 4 8
    // 1 2 5 7
    // 5 4
    // 1  2 2 4 5
        for (int i = 0; i< n; i++) {
            cin >>ele;
            a[i].first=ele;
            a[i].second=i+1;
        }
        sort(a.begin(),a.end());
        for( int i=0;i<n;i++){
            ll low=0,high=n-1,mid=-1,item=x-a[i].first;
            while(low<=high){
                mid=low+(high-low)/2;
                if(a[mid].first==item && mid!=i){
                    cout<< a[i].second<<" "<<a[mid].second<<nl;
                    return 0;

                }
                else  if(a[mid].first>item)high=mid-1;
                else low=mid+1;
            }

        }
        cout<<"IMPOSSIBLE"<<nl;

        
    
    return 0;
}