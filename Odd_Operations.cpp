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
        string s;
        cin>>s;
        int Size=s.size(),Max=-1,Odd=0;
        if((s[Size-1]-'0')%2==1){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<Size;i++){
            int ele=s[i]-'0';
            if(ele%2==1){
                Odd=1;
                break;
            }
            else{
                Max=max(Max,ele);

            }
        }
        if(Size==1 && ((s[0]-'0')%2==0))cout<<-1<<endl;
        else if(Odd){
            cout<<1<<endl;
            continue;
        }else{
            int ele=s[Size-1]-'0',ans=(ele+Max)/Max;
            cout<<ans+1<<endl;
        }

        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}