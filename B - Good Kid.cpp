#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// codewithayushluthra

int main()
{
        int t;
        cin>>t;

        int cases=1;
        while(t-- )
        {
            int n;
            cin>>n;

           int arr[n];
           for(int i=0;i<n;i++){
            cin>>arr[i];
           }
            int mini=INT_MAX;
            int index=-1;
            for(int i=0;i<n;i++){
                if(mini>arr[i]){
                    mini=arr[i];
                    index=i;
                }
            }
            int sum=1;
            if(index==-1){
                    for(int i=0;i<n;i++){
                      sum=sum*arr[i];
                    }
            }else{
                 for(int i=0;i<n;i++){
                      if(index!=i)
                      sum=sum*arr[i];
                 else sum=sum*(arr[i]+1);
                    }
            }

            cout<<sum<<endl;



        }
        return 0;
}
