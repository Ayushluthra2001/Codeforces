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
           string s;
           cin>>s;
           string a=s,b=s,c=s;
           swap(a[0],a[2]);
           swap(b[0],b[1]);
           swap(c[1],c[2]);



           if("abc"==s) cout<<"YES"<<endl;
           else if(a=="abc" || b=="abc" || c=="abc") cout<<"YES"<<endl;
           else cout<<"NO"<<endl;



        }
        return 0;
}
