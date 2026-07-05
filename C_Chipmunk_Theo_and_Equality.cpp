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
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
       sort(a.begin(),a.end());
       set<ll>possible{1};
       if(a[0]==1){
        possible.insert(2);
       }
       else{
        for(int i=a[0];i>1;){
            possible.insert(i);
            if(i%2==0){
                i/=2;
            }
            else i++;

        
        }

       }
       ll ans = INT_MAX;
       for(auto ele:possible){
        ll op=0;
        for(auto num:a){
            ll  temop=0;
            while(num!=ele){
                if((num%2==1 && num<ele-1) || ((num%2==0 )&& num<ele)){
                    temop=INT_MAX;
                    break;
                }
                if(num%2==1)num++;
                else num/=2;
                temop++;
                if(num==ele)break;
            }
            op+=temop;

        }
        ans=min(ans,op);
       }
       cout<<ans<<nl;

        
    }
    return 0;
}