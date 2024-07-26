#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int n;
        cin>>n;
//        vector<int>temp(n,0);
//        for(int i=0;i<n;i++){
//            cin>>temp[i];
//        }
        int mini = n/4;
        int rem = n%4;
        mini+=rem/2;
        cout<<mini<<endl;
 
 
    }
 
    //}
    return 0;
}
