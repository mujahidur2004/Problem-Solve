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
        map<int,int>a;
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            a[ele]++;
        }
        if(a.size()>2)
        {
            cout<<"No"<<endl;
        }
        else if(a.size()==2)
        {
            if((abs((a.begin()->second)-(next(a.begin())->second)))<=1)
            cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;
        
        
    }
}