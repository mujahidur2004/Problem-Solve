
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int sizeA=a.size(),sizeb=b.size();
    cout<<sizeA<<" "<<sizeb<<endl;
    cout<<a<<b<<endl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
}