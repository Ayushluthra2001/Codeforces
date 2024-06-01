#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>temp{a,b,c};

        sort(temp.begin(),temp.end());
        //for(auto i : temp) cout<<i<<" ";
        cout<<temp[1]<<endl;
    }


        return 0;
    }



