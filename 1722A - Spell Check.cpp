#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            string s;
            cin>>s;
            bool ans=true;
            unordered_map<char,int>mapping;
            for(auto i : s  ){
                mapping[i]++;
            }
            if(n>=6) ans=false;
            string temp="Timur";
            for(auto i : temp){
                if(mapping.find(i)==mapping.end()) ans=false;
            }
            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

        return 0;
    }



