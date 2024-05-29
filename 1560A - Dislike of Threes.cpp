#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
        vector<int>ans;
        for(int i=1;ans.size()<=1000;i++){
            if(i%3!=0 && i%10!=3){
                ans.push_back(i);
            }
        }
    while(t--){
            int n;
            cin>>n;
            cout<<ans[n-1]<<endl;

        }

        return 0;
    }



