#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n, x;
		cin >> n >> x; 
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) 
			cin >> a[i];

		// Create segments for each pile representing the range [a[i] - x, a[i] + x]
		vector<pair<long long, long long>> segments(n);
		for (int i = 0; i < n; i++)
			segments[i] = {a[i] - x, a[i] + x};

		long long ans = 0; // Initialize the number of changes needed
		// Initialize the first segment's range
		long long l = segments[0].first;
		long long r = segments[0].second;
		for (int i = 1; i < n; i++)
		{
			// Update the current range to the intersection of the current segment
			l = max(l, segments[i].first);
			r = min(r, segments[i].second);
			// If the current range is invalid, increment the change counter
			if (l > r)
			{
				ans++;
				// Reset the range to the current segment
				l = segments[i].first;
				r = segments[i].second;
			}
		}
		cout << ans << endl; // Output the minimum number of changes needed
	}
}

// Time Complexity (TC): O(n) = O(2*10^5)
// Space Complexity (SC): O(n) = O(2*10^5)
