#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ele;
    map<int ,int>a;
    while(n--)
    {
        cin>>ele;
        a[ele]++;
    
    }
    if((a.begin()->second)%2==0)cout<<"Unlucky"<<endl;
    else cout<<"Lucky"<<endl;
}