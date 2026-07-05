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
        int n,a,b,ans;
        cin >> n;
        int sum = INT_MAX;
        while(n--){
            cin>>a>>b;
            if(b%2==0){
                 ans=a+(b/2)-1;

            }
            else{
                ans=a+b/2;

            }
            sum=min(sum,ans);

        }
        cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}