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
        int n,ta,se;
        cin >> n>>ta>>se;
        string s;
        cin>>s;
        int res=0;
        int totalSeat=ta*se;
        
        int temta=ta;
        for (int i = 0; i< n; i++) {
            if(s[i]=='I' && ta && res && totalSeat){
                res++;
                ta--;
                totalSeat--;
                
            }

            else if(s[i]=='A' && totalSeat){
                if(res%se==0){
                    res++;
                    ta--;
                    totalSeat--;
                }
                else{
                    res++;
                    totalSeat--;
                }
            }
            else if(s[i]=='E' && totalSeat){
                if(res%se==0){
                    if(res/se<temta-ta){
                        res++;
                        totalSeat--;
                    }
                }
                else{
                    res++;
                    totalSeat--;
                }
            }
        }
        cout<<res<<nl;

        
    }
    return 0;
}