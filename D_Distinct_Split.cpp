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
        string s;
        cin>>s;
        unordered_set<char>st;
        vector<int>pre_count(n+1,0),suff_count(n+1,0);
        for(int i=1;i<n;i++){
            st.insert(s[i-1]);
            pre_count[i]=st.size();
        }
        st.clear();
        for(int i=n;i>=1;i--){
            st.insert(s[i-1]);
            suff_count[i]=st.size();

        }
        int res=0;
        for(int i=0;i<n;i++){
            int sum=pre_count[i]+suff_count[i+1];
            res=max(res,sum);
        }
        cout<<res<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}