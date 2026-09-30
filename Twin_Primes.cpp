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

const int N = 20000000;

int main()
{
    fast_io;

    // Sieve of Eratosthenes
    vector<bool> isPrime(N + 1, true);

    isPrime[0] = isPrime[1] = false;

    for(int i = 2; 1LL * i * i <= N; i++)
    {
        if(isPrime[i])
        {
            for(int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    vector<pair<int,int>> twin;

    for(int i = 3; i + 2 <= N; i++)
    {
        if(isPrime[i] && isPrime[i + 2])
        {
            twin.push_back({i, i + 2});
        }
    }

    
    int s;

    while(cin >> s)
    {
        cout << "(" << twin[s - 1].first
             << ", " << twin[s - 1].second
             << ")" << nl;
    }

    return 0;
}