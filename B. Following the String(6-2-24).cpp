#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        int n2;
        cin>>n2;
        vector<int> ans(n2);
        for(int i = 0;i<n2;i++){
            cin>>ans[i];
        }
        map<int,vector<char>>mapping;
 
        string s="";
        int count = 0;
        for(auto c:ans){
            if(mapping[c].size()==0){
                mapping[c].push_back('a');
                s+='a';
            }
            else{
                mapping[c].push_back(mapping[c][mapping[c].size()-1]+1);
                s+=mapping[c][mapping[c].size()-1];
            }
        }
        cout<<s<<endl;
    }
 
}
