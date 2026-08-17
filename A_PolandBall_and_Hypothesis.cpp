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

int main()
{
    fast_io;

    const int N = 1000000;
    vector<int> primes;
    vector<bool> isPrime(N + 1, true);
    
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = false;
        }
    }
    
    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
    
    int n;
    cin >> n;
    int m = 1;
    while(isPrime[n*m+1]){
        m++;
    }
    cout<< m <<nl;

    

    return 0;
}