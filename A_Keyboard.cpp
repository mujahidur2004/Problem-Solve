#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
  
        // --------- Problem Logic Starts Here ---------
        char c;
        int a;
        cin>>c;
        if(c=='R')a=-1;
        else a=1;
        string s,news,keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
        cin>>s;
        c=s[0];
        for(int i=0;i<keyboard.size();i++)
        {
            if(c==keyboard[i]){
                cout<<keyboard[i+a];
                news.push_back(keyboard[i+a]);
                break;
            }
        }
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                cout<<news[i-1];
                news.push_back(news[i-1]);
            }
            else{
                c=s[i];
                for(int j=0;j<keyboard.size();j++){
                    if(c==keyboard[j]){
                    cout<<keyboard[j+a];
                    news.push_back(keyboard[j+a]);
                    break;
                }

                }
            }
        }
        cout<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}