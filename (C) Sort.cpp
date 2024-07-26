#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n,k;
        cin>>n>>k;
       string temp1;
       string temp2;
       cin>>temp1;
       cin>>temp2;
 
       //int count =0;
       for(int i=0;i<k;i++){
         int l,r;
         cin>>l>>r;
          string sub1 = temp1.substr(l-1,r-l+1);
          string sub2= temp2.substr(l-1,r-l+1);
          vector<int>freq1(26,0);
          vector<int>freq2(26,0);
 
          for(int i=0;i<sub1.length();i++){
            freq1[sub1[i]-'a']++;
          }
            for(int i=0;i<sub2.length();i++){
            freq2[sub2[i]-'a']++;
          }
          int count =0;
          for(int i=0;i<26;i++){
                count+=abs(freq1[i]-freq2[i]);
          }
 
 
          cout<<count/2<<endl;
       }
    }
 
    return 0;
}
