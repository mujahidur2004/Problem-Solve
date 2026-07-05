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
        long long int n,k;
        cin >> n>>k;
        vector<pair<long long int ,long long int> >a;
       
        for (int i = 0; i < n; i++){
            ll int  ele;
            cin>>ele;
            ll int ma=ele%k;
            if(ma==0)ma=k;

            a.push_back({ma,i});


        } 
        sort(a.begin(), a.end(), [&](pair<long long, long long> a, pair<long long, long long> b) {
			if (a.first != b.first)
				return a.first > b.first;
			return a.second < b.second;
		});
        for(auto element:a)
        {
            cout<<((element.second)+1)<<" ";
        }
        cout<<endl;

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}