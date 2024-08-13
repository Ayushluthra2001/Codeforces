#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t;
    cin >> t;
 
 
    while (t--) {
        int n;
        cin>>n;
        string s = to_string(n);
 
        if(s.length()<=2){
            cout<<"NO"<<endl;
        }else{
 
            if(s[0]=='1' && s[1]=='0'){
                int x = 0;
                for (int i=2;i<s.length();i++) {
                        x=x*10+(s[i]-'0');
                    }
                if(x >=2 && s[2]!='0') cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
 
 
            }else{
                cout<<"NO"<<endl;
            }
 
        }
 
 
 
 
 
 
    }
 
    return 0;
}
