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

        int n,d;
        cin >> n>>d;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
    int left = -1; 
	int right = n - 1; 
	int team_size = 1; 
	int teams = 0; 
	while (left < right) 
	{
		if ((a[right] * team_size) <= d && left < right)
		{
			left++;
			team_size++;
		}
		else
		{
			teams++;
			right--;
			team_size = 1;
		}
	}

	
	cout << teams << endl;
    return 0;
}