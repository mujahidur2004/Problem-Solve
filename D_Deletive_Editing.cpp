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
        string a,b,res="";
        cin>>a>>b;       
        vector<int>fr(26,0);
        int m=a.size(),n=b.size();
        for(int i=n-1;i>=0;i--){
            fr[b[i]-'A']++;
        }
        for(int i=m-1;i>=0;i--){
            int cur=a[i]-'A';
            if(fr[cur]>0)fr[cur]--;
            else a[i]='.';
        }
        for(int i=0;i<m;i++){
            if(a[i]!='.'){
                res+=a[i];
            }
        }
        if(res==b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}