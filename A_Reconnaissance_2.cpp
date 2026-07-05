#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    
        // --------- Problem Logic Starts Here ---------
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int one=0,two=n-1;
        int dif=abs(a[0]-a[n-1]);
        for(int i=0;i<n-1;i++){
            int ndif=abs(a[i]-a[i+1]);
            if(dif>ndif){
                dif=ndif;
                one=i;
                two=i+1;
            }
        }
        cout<<one+1<<" "<<two+1<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}