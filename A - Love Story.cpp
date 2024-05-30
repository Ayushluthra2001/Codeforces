#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            string s;
            cin>>s;
            int count=0;
            string temp="codeforces";
            for(int i=0;i<temp.length();i++){
                if(temp[i]!=s[i]) count++;
            }
            cout<<count<<endl;
// hello world 
    }
 
        return 0;
    }
