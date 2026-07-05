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
        int  n,m;
        cin>>n>>m;
        vector<vector<ll>>a(n,vector<ll>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
       long long negatives = 0;
		long long minimum = INT_MAX; 
		long long sum = 0; 

		
		for (long long i = 0; i < n; i++)
		{
			for (long long j = 0; j < m; j++)
			{
				if (a[i][j] < 0)
					negatives++; 
				minimum = min(minimum, abs(a[i][j])); 
				sum += abs(a[i][j]); 
		}
    }

		
		if (negatives % 2 == 0)
			cout << sum << endl;
		else
			cout << sum - 2 * abs(minimum) << endl;
    }
    return 0;
}