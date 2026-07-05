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
        int n,one=0,two=0,cnt=0,res;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++){
            int ele;
            cin>>ele;
            a.push_back(ele);
            if(ele==1)one++;
            else two++;
        } 
        if(two==0)cout<<1<<endl;
        else if(two%2==1)cout<<-1<<endl;
        else{
            two=two/2;
            for(int i=0;i<n;i++)
            {
                if(a[i]==2)
                {
                    cnt++;
                    if(cnt==two)
                    {
                        res=i+1;
                        break;

                    }
                }
            }
            cout<<res<<endl;


        }
        

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}