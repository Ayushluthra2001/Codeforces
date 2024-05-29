#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            vector<int>arr;
            int maxi=0,mini=INT_MAX;
            for(int i=0;i<n;i++){
                        int k;
                        cin>>k;
                        mini=min(mini,k);
                        maxi=max(maxi,k);
                    arr.push_back(k);
            }
            cout<<abs(mini-maxi)<<endl;

        }

        return 0;
    }



