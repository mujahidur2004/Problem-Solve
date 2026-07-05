#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ele,maxi=INT_MIN;
        cin>>n;
        while(n--)
        {
            cin>>ele;
            if(ele>maxi)
            {
                maxi=ele;
            }
        }
        cout<<maxi<<endl;
    }
}