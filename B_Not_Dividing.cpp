#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++)
		{
			if (a[i] == 1)
				a[i]++;
		}
       //sort(a.begin(),a.end());
       for(int j=1;j<n;j++)
       {
        if(a[j]%a[j-1]==0){
            a[j]+=1;
        }

       }
       for (int i = 0; i < n; i++) cout<< a[i]<<" ";
       cout<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}