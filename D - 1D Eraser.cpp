#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// codewithayushluthra

int main()
{
        int t;
        cin>>t;


        while(t-- )
        {
            int n,k;
            cin>>n>>k;

            string s;
            cin>>s;
            int i=0;
            int count=0;
            while(i<s.length()){
                int j=i;

                int c=0;
                while(j<s.length() && s[j]!='B'){
                    j++;
                }
                if(j>=s.length())break;
                if(s[j]=='B'){
                    count++;
                    i=j+k;
                }
            }
            cout<<count<<endl;




        }
        return 0;
}
