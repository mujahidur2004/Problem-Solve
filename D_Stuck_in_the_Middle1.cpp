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
        cin >> s;
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        if(n==2){
           
            cout<<"YES"<<endl;
          
           continue;
        }
        int needcnt;
        
        map<char,int> totalcount;
        for(int i=0;i<n;i++){
            totalcount[s[i]]++;
        }
        int ck=1;
        if(totalcount.size()==1){
            cout<<"YES"<<nl;
            continue;
        }
        for(int i=1;i<n;i++){
            if(s[i-1] == s[i] || s[i]== s[i+1]){

            }
            else{
                ck=0;
                break;
            }
            int cnt= min(i,n-i) +1;
            if(cnt< totalcount[s[i]])ck=0;
            ;

            
                
                
            
            
           
            
        }
         
        if(ck )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        
    }

    return 0;
}
