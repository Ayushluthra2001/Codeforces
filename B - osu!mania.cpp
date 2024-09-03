#include <bits/stdc++.h>
using namespace std;
 
    int main() {
        int t;
        cin >> t;
 
 
        while (t--) {
//            int a, b,c;
//            cin>>a>>b;
//            int mini = INT_MAX;
//            for(int i = a; i<=b;i++){
//
//                    int x= abs(i-a) + abs(b-i);
//
//                    mini = min(mini , x);
//            }
//            cout<<mini<<endl;
 
              int n;
              cin>>n;
              vector<int>temp;
              for(int i = 0; i<n;i++){
                string x;
                cin>>x;
 
                for(int j =0;j<x.length();j++ )if(x[j] =='#') temp.push_back(j+1);
 
              }
 
              for(int i=temp.size()-1;i>=0;i--) cout<<temp[i]<<" ";
              cout<<endl;
 
 
        }
 
        return 0;
    }
