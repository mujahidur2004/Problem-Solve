#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        long long sum=x-y+1;

        if(x==y)
        {
            cout<<"NO"<<endl;
        }
        else if(sum<0)
        {
            cout<<"NO"<<endl;
        }
        else if(sum%9!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
