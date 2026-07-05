#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
 
	int t; cin >> t;
	while(t--) {
		int n, m, p, q;
         cin >> n >> m >> p >> q;
		if(n % p || (n*q/p) == m) cout << "YES"<<endl;
		else cout << "NO"<<endl;
	}
 
	return 0;
}