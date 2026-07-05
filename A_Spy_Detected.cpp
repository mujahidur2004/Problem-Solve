#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        map<int ,int> a;
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            a[ele]++;
            v.push_back(ele);
        }
        int ele;
        ((a.begin()->second ==1)? ele =a.begin()->first: ele=(a.rbegin()->first));
        for(int i=0;i<n;i++)
        {
            if(v[i]==ele)
            {
                cout<<(i+1)<<endl;
                break;
            }

        }
    }
}
