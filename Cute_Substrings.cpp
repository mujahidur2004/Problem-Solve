/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0, res = 0;

        for (int j = 0; j < n; j++)
        {
            int i=1,cnt=0;
            for (int k = j; k < n; k++)
            {
                if (i % 2 == 1 && (s[k] == 'u' || s[k] == 'o'))
                    cnt++;

                else if (i % 2 == 0 && s[k] == 'w')
                    cnt++;
                else{
                    cnt=0;
                    break;
                }
                i++;
                    
                if(cnt%2==1)res = max(cnt, res);
            }
            
           
        }
        if(cnt%2==1)res = max(cnt, res);

        cout << res << nl;
    }
    return 0;
}