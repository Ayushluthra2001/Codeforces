#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

            string ans;
            cin>>ans;
            for(int i=0;i<ans.length();i++){
                ans[i]=toupper(ans[i]);
            }
            if(ans=="YES") cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        return 0;
    }



