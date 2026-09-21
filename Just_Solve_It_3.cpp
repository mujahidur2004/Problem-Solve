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

    int n;
    cin >> n;
    while(n){
        int tem =n;
        int i=2,cnt=0;
        set<int>st;
        while(tem>1){
            while(tem%i==0){
                st.insert(i);
                tem/=i;
            }
            i++;


        }
        cout<<n<<" : "<<st.size()<<nl;
        cin >> n;
    }

    

    

    return 0;
}