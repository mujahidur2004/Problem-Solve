
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
        int k;
        cin >> k;
        string s;
        cin >> s;
        int op = 0, cl = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                op++;
            else
                cl++;
        }
        vector<int> a(n, 0);
        if (op <= cl)
        {
            for (int i = 0; i < n; i++)
            {

                {
                    if (k && s[i] == '('){
                         a[i] = 1;
                         k--;

                    }
                       
                }
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(k && s[i]==')'){
                    a[i]=1;
                    k--;
                }
            }

        }
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<nl;
    }
    return 0;
}