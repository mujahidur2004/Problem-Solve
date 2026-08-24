#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int ele;
            cin >>ele;
            mp[ele]++;
        }
        int Max_s=-1;
        for(auto ele :mp){
            Max_s=max(ele.second,Max_s);
        }
        long long  res=0;
        for(auto ele: mp){
            if(ele.second>(n-ele.second)){
                res+=((n-ele.second +(min(2,ele.second-n+ele.second))) * ele.first);
            }
            else{
                res+=(ele.second * ele.first);
            }
        }
        cout<<res<<endl;
    }
}