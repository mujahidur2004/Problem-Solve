#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            v[i]=c-'0';
        }
        bool ck=0;
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
                ck=1;
                break;
            }
        }
        if(!ck){
            cout<<"Bob"<<endl;
            continue;
        }
        cout<<"Alice"<<endl;
        vector<int>ans;
        int i=0,j=n-1;
        while(i<j){
            while(i<n && v[i]!=1)i++;
            while(j>00 && v[j]!=0)j--;
            if(i>=j)break;
            ans.push_back(i);
            ans.push_back(j);
            i++;
            j--;

        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for (auto ele: ans){
            cout<<ele+1<<" ";
        }
        cout<<endl;


       
    }
}