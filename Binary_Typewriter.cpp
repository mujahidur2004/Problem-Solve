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

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >>s;
        vector<int> zero,one;
        int i=0;
        for(;i<n;i++){
            if(s[i]=='0') zero.push_back(i);
            else one.push_back(i);
        }
        if(one.size()==0){
            cout<<n<<nl;
        }
        else if(zero.size()==0){
            cout<<n+1<<nl;
        }
        else{
            int ione=0;
            for(;ione<n;ione++){
                if(s[ione]=='1')break;
            }
            int izero=-1;
            for(int j=ione+1;j<n;j++){
                if(s[j]=='1' && izero!= -1)break;
                if(s[j]=='0' ){
                    izero=j;
                }
            }
            //cout<<ione<<" "<<izero<<" ";
            if(izero!=-1){
                 reverse(s.begin()+ione,s.begin()+izero+1);

            }
            int res=n;
            for(int i=1;i<n;i++){
                if(s[i]!=s[i-1])res++;
            }
           
            cout<<res<<nl;
        }
        
        
    }

    return 0;
}