#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x = n/k;
//        vector<int>temp(n,0);
//        for(int i=0;i<n;i++){
//            cin>>temp[i];
//        }
            vector<string>temp(n);
            for(int i=0;i<n;i++){
                cin>>temp[i];
            }
 
//        int mini = n/4;
//        int rem = n%4;
//        mini+=rem/2;
//        cout<<mini<<endl;
 
 
           vector<string>ans(x,string(x,'0'));
 
            for (int i = 0; i < n; i += k) {
                for (int j = 0; j < n; j += k) {
                ans[i/k][j/k] = temp[i][j];
            }
        }
 
            for(auto i : ans){
                cout<<i<<endl;
            }
 
 
    }
 
    //}
    return 0;
}
