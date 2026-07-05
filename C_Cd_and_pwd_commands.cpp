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

int main() {
    fast_io;

    int t;
    cin >> t;
    vector<string>sv;

    while (t--) {
        string s;
        cin >> s;

        if (s == "pwd") {
            cout << '/';
            for (auto ele : sv) {
                cout << ele << '/';
            }
            cout << nl;
        }
        else {
            string ns;
            cin >> ns;

            if(ns[0]=='/') sv.clear(); 

            string ads="";

            for(int i=0;i<ns.size();i++){
                if(ns[i]!='/'){
                    ads.push_back(ns[i]);
                }
                else{
                    if(ads==".."){
                        if(!sv.empty())  
                            sv.pop_back();
                        ads="";
                    }
                    else if(ads==""){
                        ;
                    }
                    else{
                        sv.push_back(ads);
                        ads="";
                    }
                }
            }

            if(ads==".."){
                if(!sv.empty())
                    sv.pop_back();
            }
            else if(ads!=""){
                sv.push_back(ads);
            }
        }
    }

    return 0;
}