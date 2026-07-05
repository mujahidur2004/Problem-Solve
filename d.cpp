#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int small=min(x,y);
        int big =max(x,y);
        cout<<(x-small)<<" "<<(big)<<endl;

        
    }
}