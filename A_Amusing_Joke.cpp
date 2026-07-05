#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    
        // --------- Problem Logic Starts Here ---------
        string a,b,c;
        cin>>a>>b>>c;
        map<char,int>Name,duplicate;
        for(int i=0;i<a.size();i++){
            Name[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            Name[b[i]]++;
        }
        for(int i=0;i<c.size();i++){
            duplicate[c[i]]++;
        }
        int ck=1;
        for(auto ele:Name){
            if(ele.second!=duplicate[ele.first]) {
                ck=0;
                break;
            }

        }
        if(Name.size()!=duplicate.size())ck=0;
        if(ck)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}