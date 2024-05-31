#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;

        vector<int>temp;
        unordered_map<int,int>mapping;
        int index=-1;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            temp.push_back(k);
            mapping[k]++;
        }
        int el=-1;
        for(auto i : mapping){
            if(i.second==1) el=i.first;
        }
        for(int i=0;i<temp.size();i++){
            if(el==temp[i]){
                index=i;
                break;
            }
        }
        cout<<index+1<<endl;
    }


        return 0;
    }



