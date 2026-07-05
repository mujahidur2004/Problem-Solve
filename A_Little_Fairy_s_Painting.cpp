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
        set<int>st;
        for (int i = 0; i < n; i++) {

        
        cin >> a[i];
        st.insert(a[i]);
        }
        int k=st.size();
        int sk;

        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                sk=a[i];
                break;

            }
        }
        cout<<(k+(sk-k))<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}