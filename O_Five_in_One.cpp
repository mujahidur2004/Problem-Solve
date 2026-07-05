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
int divisor(int n){
     int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) cnt++;
    }
    return cnt;
}

int main() {
    fast_io;


    int t;
    
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        int Max=INT_MIN,Min=INT_MAX,Count_prime=0,count_palindrome=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());


        for (int i = 0; i< n; i++) {
           
            Max=max(a[i],Max);
            Min=min(a[i],Min);
            if(a[i]<10 || a[i]%10==(a[i]/10))count_palindrome++;
            if(divisor(a[i])==2)Count_prime++;
            b[i]=divisor(a[i]);

        }
         int Max_divisor = a[0];
        int maxDiv = b[0];

        for(int i = 1; i < n; i++){
            if(b[i] >= maxDiv){
                maxDiv = b[i];
                Max_divisor = a[i];
            }
            
        }
        cout<<"The maximum number : "<<Max<<nl;

        cout<<"The minimum number : "<<Min<<nl;
        cout<<"The number of prime numbers : "<<Count_prime<<nl;
        cout<<"The number of palindrome numbers : "<<count_palindrome<<nl;
        cout<<"The number that has the maximum number of divisors : "<<Max_divisor<<nl;

        
    
    return 0;
}