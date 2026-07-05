#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<n;i++)
        {
            int max_ele=INT_MIN;
            for(int j=i;j<n;j++)
            {
                
                max_ele=max(max_ele,a[j]);
                cout<<max_ele<<" ";
            }
        }
        cout<<'\n';
    }
}