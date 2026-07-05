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
int countVowels(string &s, int index) {
    if(index == s.length()) 
        return 0;

    char c = tolower(s[index]);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1 + countVowels(s, index + 1);
    else
        return countVowels(s, index + 1);
}
int main() {
    fast_io;

   
        string s;
        getline(cin,s);
        cout<<countVowels(s,0)<<nl;

        
    
    return 0;
}