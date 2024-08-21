#include <bits/stdc++.h>
using namespace std;
#define ll  long long
ll x = 10;
int  mod =1e9+7;
    int main() {
        int t;
        cin >> t;
 
 
        while (t--) {
            int n;
            cin>>n;
 
            if(n==1){
                cout<<"1"<<endl;
 
            }else if(n%2==0) cout<<"-1"<<endl;
            else{
                int start = 1;
                int end = n;
 
                for(int i =0;i<n/2;i++){
                    cout<<start++<<" ";
                }
                for(int i = n/2;i<n;i++){
                    cout<<end--<<" ";
                }
                cout<<endl;
 
            }
 
 
        }
 
        return 0;
    }
