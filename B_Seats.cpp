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
        int n,m,h;
        cin >> n;
        string s;
        cin>>s;
        if(n==1){
            cout<<1<<endl;
            continue;

        }
        bool f=1;
        int res=0,cnt=0,one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
                f=0;
                cnt=0;
            }
            if(s[i]=='0'){
                cnt++;
                if(cnt==2 && f ){
                    res++;
                    f=0;
                    cnt=0;
                }
                if(cnt==3){
                    res++;
                   
                    cnt=0;
                }

            }
            
        }
       if(cnt>1)res++;


        cout<<res+one<<endl;
        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}