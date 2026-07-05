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
         vector<ll> a(n);
         for (int i = 0; i < n; i++) cin >> a[i];
         ll ans=0;
         if(a[n-1]<n-1){
            cout<<-1<<endl;
            continue;
         }
         for(int j=n-2;j>=0;j--){
            while(a[j]>=a[j+1]){
                a[j]=(a[j]/2);
                ans++;
                if(a[j]==0)break;

            }
            if(a[j]==0 && a[j+1]==0){
                ans=-1;
                break;
            }
         }
         cout<<ans<<endl;
 
         
         // --------- Problem Logic Ends Here -----------
     }
     return 0;
 }