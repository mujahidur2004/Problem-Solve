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
string  answer(string a, string b)
{
   
    int carry = 0;
    string ans = "";

    for (int i = 0; i < a.size(); i++)
    {
        int ele1 = a[i] - '0';
        int ele2 = b[i] - '0' + carry;

        if (ele1 < ele2)
        {
            carry = 1;
            ele1 += 10;
            ans.push_back((ele1 - ele2) + '0');
        }
        else
        {
            carry = 0;
            ans.push_back((ele1 - ele2) + '0');
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

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

        string made = "";
        if (s[0] == '9')
        {
            s.push_back('0');
            reverse(s.begin(), s.end());

            for (int i = 0; i <= n; i++)
            {
                made.push_back('1');
            }
            string anss= answer(made,s);
            for(int i=0;i<n;i++){
                cout<<anss[i];
            }
            cout<<nl;
        }
        else
        {
            reverse(s.begin(), s.end());
            for (int i = 0; i < n; i++)
            {
                made.push_back('9');
            }
            string anss= answer(made,s);
            cout<<anss<<nl;
        }
         //cout<<made<<" "<<s<<nl;
    }

    return 0;
}