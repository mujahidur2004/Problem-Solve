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

    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        if(c=='g') {
            cout<<0<<endl;
            continue;
        }
        int mx =0;
        int c1 = 0;
        for(int i=0;i<n;i++) {
            c1 ++;
            if(s[i]=='g') break;
        }
        for(int i=0;i<n;i++) {
            if(s[i]==c) {
                
                int f=0;
                int cnt = 0;
                for(int j=i+1;j<n;j++) {
                    cnt ++;
                    if(s[j]=='g') {
                       f=1;
                        break;
                    }
                }
                if(f) {
                    mx=max(mx,cnt);
                }
                else {
                    if(cnt+c1>mx) mx = cnt+c1;
                }
                i+=cnt;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}