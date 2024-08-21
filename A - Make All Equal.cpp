#include <bits/stdc++.h>
using namespace std;
 
 
    int main() {
        int t;
        cin >> t;
 
 
        while (t--) {
            int n;
            cin>>n;
            vector<int>temp(n);
            for(int i = 0; i<n; i++) cin>>temp[i];
 
            unordered_map<int,int>mapping;
            for(auto i : temp) mapping[i]++;
            int maxi = 0;
            for(auto i : mapping) maxi = max(maxi,i.second);
 
            cout<<temp.size() - maxi<<endl;
        }
 
        return 0;
    }
