#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        set<int> s;
        for(int i=0;i<n;i++){
            int ele;
            cin >> ele;
            s.insert(ele);
        }

        int mex = 0;
        while(s.count(mex)) mex++; 
        cout << mex << endl;
    }
    return 0;
}