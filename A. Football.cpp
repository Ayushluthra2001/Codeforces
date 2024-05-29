#include <bits/stdc++.h>
using namespace std;
int main(){
    /*int t;
    cin>>t;
    while(t--){*/
            string s;
            cin>>s;
            int i=0;
            bool ans=false;
            while(i<s.length()){
                int j=i+1;
                int count=1;

                while(j<s.length() && s[i]==s[j]){
                    j++,count++;
                }
                if(count>=7){
                    ans=true;
                    break;
                }
                i=j;
            }
            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;



        return 0;
    }



