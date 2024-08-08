#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        vector<int>temp(n);
        for(int i=0;i<n;i++) cin>>temp[i];
        int mini  = *min_element(temp.begin(),temp.end());
        int candies = 0;
        for(int i=0;i<n;i++){
            candies += temp[i] - mini;
        }
        cout<<candies<<endl;
    }
 
    return 0;
}
