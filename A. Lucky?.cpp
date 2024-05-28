#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){


        int n;
        cin>>n;
            int i=6;
            int first=0;
            int last=0;
            while(i>=1){
                if(i>3){
                    last+=n%10;
                    n=n/10;
                }else{
                first+=n%10;
                n=n/10;

                }
                i--;
            }
           // cout<<first<<" "<<last<<endl;
            if(first==last) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        return 0;
    }



