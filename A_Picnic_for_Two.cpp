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
        int a , b;
        cin >> a >> b;
        int x=a,y=b;
        map<int,int> mpa,mpb;
        mpa[0]=1;mpb[0]=1;
        while(mpa[a %n]==0){
            //cout<<a%n<<" ";
            mpa[a%n]=1;
            a+=x;
            
        }
        while(mpb[b %n]==0){
            mpb[b%n]=1;
            b+=y;
        }
        int ans=0;
        for(auto ele :mpa){
            if(mpb[ele.first])ans++;

        }
        cout<<ans<<nl;

        
    }

    return 0;
}