/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main()
{
  fast_io;

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0, diff = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      mx = max(mx, a[i]);
      if(i) {
        diff = max(diff , mx-a[i]);
      }
    }
    for( int i = 0 ; i < n-1 ; i++) {
      if(a[i+1]< a[i]){
        a[i+1]+=diff;
      }
    }
    if(is_sorted(a.begin(),a.end())){
      cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
  }
  return 0;
}