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
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int i=1,j=n-1;
        ll last=a[0],sum=0;
        int f=1;
        ll cnt=1, suma=a[0],sumb=0;
        while(i<=j){
            sum=0;
            if(f){
                int k=j;
                for(;k>=i;k--){
                    sum+=a[k];
                    if(sum>last){
                          f=0;
                          //cnt++;
                        break;
                      
                    }
                }
                sumb+=sum;
                cnt++;
                last=sum;
                j=k-1;
                //cout<<j<<nl;

            }
            else{
                int k=i;
                for(;k<=j;k++){
                    sum+=a[k];
                    if(sum>last){
                        f=1;
                        //cnt++;
                        break;

                    }
                }
                cnt++;
                suma+=sum;
                last=sum;
                i= k+1;
                //cout<<i<<nl;
            }
            //cout<<suma <<" "<<sumb<<nl;
            

        }
        cout<<cnt <<" "<< suma <<" "<<sumb<<" "<<nl;
    }

    return 0;
}