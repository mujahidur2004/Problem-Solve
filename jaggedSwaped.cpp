#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,flag=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<(n-1);i++)
        {
            if(a[i-1]<a[i] && a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
            }
            else
            {
                flag=0;
                break;

            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
}