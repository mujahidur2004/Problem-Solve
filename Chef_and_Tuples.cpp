#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int cnta = 1;
        for(int i = 2 ;i <= a;i++){
            if(n % i == 0){
                cnta++;
            }
        }
        int cntb = 1;
        for(int i = 2 ;i <= b;i++){
            if(n % i == 0){
                cntb++;
            }
        }
        int cntc = 1;
        for(int i = 2 ;i <= c;i++){
            if(n % i == 0){
                cntc++;
            }
        }
        cout<<cnta<<" "<<cntb<<" "<<cntc<<endl;
        
        

        

    }
}