#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        string t;
        cin>>s;
        cin>>t;
 
        bool can = false;
 
        if(t.length() > s.length()){
            can = false;
        }else{
            int i=0;
            int j=0;
            while(i<s.length() && j<t.length()){
                if(s[i]==t[j]) {
                    i++;
                    j++;
                }else if(s[i]=='?'){
                    s[i] = t[j];
                    i++;
                    j++;
 
                }else i++;
            }
 
            if(j==t.length()) can = true;
            if(i<s.length()){
                while(i<s.length()){
                    if(s[i]=='?') s[i++]=t[0];
                    else i++;
                }
            }
        }
        if(can){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}
