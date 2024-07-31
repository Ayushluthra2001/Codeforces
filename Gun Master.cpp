#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int count =0;
	     int n ,d;
	     cin>>n>>d;
	     vector<int>temp(n);
	     for(int i=0;i<n;i++){
	         cin>>temp[i];
	     }
	     bool currGun =0;
	     for(int i=0;i<n;i++){
	         if(currGun==0 && temp[i]>d) {
	             count++;
	             currGun = !currGun ;
	             
	         }else if(currGun ==1 && temp[i]<=d){
	             count++;
	             currGun = !currGun;
	             
	         }else{
	             continue;
	         }
	     }
	    cout<<count<<endl;
	}

}
