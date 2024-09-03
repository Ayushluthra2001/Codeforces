#include <bits/stdc++.h>
using namespace std;
 
    int main() {
        int t;
        cin >> t;
 
 
        while (t--) {
            int a, b,c;
            cin>>a>>b;
            int mini = INT_MAX;
            for(int i = a; i<=b;i++){
 
                    int x= abs(i-a) + abs(b-i);
 
                    mini = min(mini , x);
            }
            cout<<mini<<endl;
 
 
        }
 
        return 0;
    }
