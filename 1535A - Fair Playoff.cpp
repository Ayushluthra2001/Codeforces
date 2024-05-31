#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int winer1=max(a,b);
        int loser1=min(a,b);
        int winer2=max(c,d);
        int loser2=min(c,d);
        int temp=max(loser1,loser2);
        if(temp>winer1 || temp>winer2){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
    }


        return 0;
    }



