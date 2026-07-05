#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,number;
    long long sum=0;
    
    for(;i<s.size();i++)
    {
        char c =s[i];
        sum+=c-'0';
    }
    
    cout<<sum<<endl;

    

}