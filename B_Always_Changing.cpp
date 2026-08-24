#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt1 = 0, cnt0 = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cnt++;
        }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                if (s[i] == '1')
                    cnt1++;
                else
                    cnt0++;
            }
        }
        if(cnt1==0 && cnt0==0){
            cout<<0<<endl;
            continue;
        }
        if(abs(cnt1-cnt0)==0){
            cout<<cnt1+cnt0<<endl;
        }
        else if(abs(cnt1-cnt0)==1){
            cout<<cnt1+cnt0<<endl;

        }
        else if(abs(cnt1-cnt0)==2){
            if(())
        }
        else cout<<-1<<endl;
    }
}