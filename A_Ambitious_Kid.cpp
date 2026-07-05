#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele,res=INT_MAX;
    cin>>n;
    while(n--)
    {
        cin>>ele;
        ele=abs(ele);
        if(ele<res)
        {
            res=ele;

        }
    }
    cout<<res<<endl;

}