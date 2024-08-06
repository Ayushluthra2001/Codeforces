#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
 
        int count = 0;
 
 
        int x = 0, y = 0;
        if (a1 > b1) x++;
        if (a2 > b2) x++;
        if (b1 > a1) y++;
        if (b2 > a2) y++;
        if (x > y) count++;
        x = 0, y = 0;
        if (a1 > b2) x++;
        if (a2 > b1) x++;
        if (b2 > a1) y++;
        if (b1 > a2) y++;
        if (x > y) count++;
        cout << count *2 << endl;
    }
 
    return 0;
}
