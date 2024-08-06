#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        bool bath = false;
        int n, s, m;
        cin >> n >> s >> m;
        
        vector<pair<int, int>> temp(n);
        for (int i = 0; i < n; i++) {
            cin >> temp[i].first >> temp[i].second;
        }
 
        
        if (temp[0].first >= s) bath = true;
 
        
        for (int i = 1; i < n; i++) {
            if (temp[i].first - temp[i - 1].second >= s) {
                bath = true;
                break;
            }
        }
 
     
        if (m - temp[n - 1].second >= s) bath = true;
 
        if (bath) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
