#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>count;
    for(int i=0;i<s.size();i++)
    {
        char ele=s[i];
        count[ele]++;
    }
    for(auto ele:count)
    {
        cout<<ele.first<<" : "<<ele.second<<endl;
    }
}