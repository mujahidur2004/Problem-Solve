#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,res=0;
        cin>>n;
        n--;
        while(n--)
        {
            int k;
            cin>>k;
            res=res+k;
        }
        cout<<(-1*res)<<endl;


    }
}