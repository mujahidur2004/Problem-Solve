#include <bits/stdc++.h>
using namespace std;

long long findMax(vector<long long>& a, int i, int n) {
    
    if(i == n-1) 
        return a[i];

    return max(a[i], findMax(a, i+1, n));
}

int main() {

    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << findMax(a, 0, n);

}