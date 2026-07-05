/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define nl '\n'
#define gcd __gcd

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
      int n;
      cin>>n;
      int value= 2*n;
      for (int i = 0; i <n; i++)
      {
        cout<<value--<<" ";
      }
      cout<<endl;
    }

    return 0;
}