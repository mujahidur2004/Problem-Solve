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

int main()
{
    fast_io;

    int n , k;
    cin >> n >>k;
    vector<int >a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    sort(a.begin(),a.end());
    int i=0,j = n-1;
    int ans =0;
    while(i<=j){
        if(a[i]+a[j]>k){
            j--;
        }
        else{
            j--;
            i++;
        }
        ans++;

    }
    cout<<ans<<endl;

    

    return 0;
}