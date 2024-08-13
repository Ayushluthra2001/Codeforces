 #include <bits/stdc++.h>
 
    using namespace std;
    int main() {
        int t;
        cin >> t;
 
 
        while (t--) {
            int n;
            cin>>n;
            vector<int>temp1(n);
            vector<int>temp2(n,0);
            for(int i=0;i<n;i++) cin>>temp1[i];
            bool wrong = true;
            temp2[temp1[0]-1]=1;
            for(int i=1;i<n;i++){
                int place = temp1[i]-1;
 
                if ((place > 0 && temp2[place - 1] != 0) || (place < n - 1 && temp2[place + 1] != 0)) {
                temp2[place] = 1;
                }
                else{
                    wrong = false;
                    break;
                }
 
 
            }
            if(wrong) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
 
 
 
 
        }
 
        return 0;
    }
