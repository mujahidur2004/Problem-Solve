#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    ll int t ;
    
        // --------- Problem Logic Starts Here ---------
        string s;
        int ind;
        cin >> s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                ind=i;
                break;

            }
        }
        if(s[ind-1]=='9')
        {
            cout<<"GOTO Vasilisa."<<endl;
        }
        else{
            int point=s[ind+1]-'0';
            if(point<5)
            {
               for(int i=0;i<ind;i++)
               {
                    cout<<s[i];
               }
               cout<<endl;
            }
            else
            {
                int last=(s[ind-1]-'0')+1;
                
                
                //s[ind-1]=c;
                for(int i=0;i<ind-1;i++)
                {
                    cout<<s[i];
                }
                cout<<last;
               cout<<endl;

            }
        }
       
        // vector<int> a(n);
        // for (int i = 0; i < n; i++) cin >> a[i];

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}