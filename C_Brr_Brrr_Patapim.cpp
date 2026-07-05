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
        int n;
        cin >> n;
       
        vector<int>a;
        map<int,int>b;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int ele;
                cin>>ele;
                a.push_back(ele);
                b[ele]++;

            }
        }
        int cul;
        for(int i=1;i<=2*n;i++){
            if(b[i]==0){
                cul=i;
                break;
            }
        }
        cout<<cul<<" ";
        for(auto ele: a){
            if(b[ele]==0){
                continue;

            }
            else{
                cout<<ele<<" ";
                b[ele]=0;
            }
        }
        cout<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}