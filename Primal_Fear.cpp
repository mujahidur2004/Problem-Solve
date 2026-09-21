/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

const int mx = 1000000;

bool prime[mx + 1];
int ans[mx + 1];

bool check(int n)
{
    string s = to_string(n);

    for(int i = 0; i < s.size(); i++)
    {
        // কোনো digit 0 হলে বাদ
        if(s[i] == '0')
            return false;

        // left থেকে i সংখ্যক digit বাদ
        int x = stoi(s.substr(i));

        // prime না হলে বাদ
        if(!prime[x])
            return false;
    }

    return true;
}

int main()
{
    fast_io;

    // Sieve
    for(int i = 0; i <= mx; i++)
        prime[i] = true;

    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= mx; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= mx; j += i)
                prime[j] = false;
        }
    }

    // Precompute
    for(int i = 1; i <= mx; i++)
    {
        ans[i] = ans[i - 1];

        if(prime[i] && check(i))
            ans[i]++;
    }

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        cout << ans[n] << nl;
    }

    return 0;
}