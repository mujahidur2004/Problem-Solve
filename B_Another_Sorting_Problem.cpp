#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool isSorted(vector<ll>& a) {
  for (int i = 1; i < a.size(); i++) {
    if (a[i] < a[i - 1]) {
      return false;
    }
  }
  return true;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int test_case;
  cin >> test_case;
  while (test_case--) {
    ll n, need = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
      cin >> v[i];
    }
    int loop = 1;
    vector<int> vis(n, 0);
    if (isSorted(v)) {
      cout << "YES" << endl;
      continue;
    }
    ll mx = 0;
    for (int i = 0; i < n; ++i) {
      mx = max(v[i], mx);
      if (mx > v[i]) {
        vis[i] = 1;
        need = max(need, mx - v[i]);
      }
    }


    for (int i = 0; i < n; ++i) {
      if (vis[i]) {
        v[i] += need;
      }
      
      if (i > 0 && !vis[i] && v[i] < v[i - 1]) {
        vis[i] = 1;
        v[i] += need;
      }
    }

    int flag = 0;
    if (isSorted(v)) {
      flag = 1;
    }

    cout << (flag ? "YES" : "NO") << endl;
  }

  return 0;
}