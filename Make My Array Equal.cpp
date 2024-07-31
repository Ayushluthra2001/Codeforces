#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>temp(n);
	    for(int i=0;i<n;i++){
	        cin>>temp[i];
	    }
	    int maxi = *max_element(temp.begin(),temp.end());
	    unordered_map<int,vector<int>>mapping;
	    for(int i=0;i<n;i++) {
	        if(mapping.find(temp[i])==mapping.end()){
	            mapping[temp[i]].push_back(i); 
	        }
	    }
	    // cout<<maxi<<endl;
	    bool found = true;
	    for(int i=0;i<temp.size();i++){
	        int rem = maxi  - temp[i];
	        int currIndex =i;
	        if(rem!=0 && mapping.find(rem)==mapping.end() ){
	            found = false;
	            break;
	        }else if(rem!=0 && mapping.find(rem)!=mapping.end()){
	            vector<int>index = mapping[rem];
	            int count = 0;
	            for(int j=0;j<index.size();j++){
	                if(index[j]!=currIndex) count++;
	            }
	            if(count==0) {
	                found = false;
	                break;
	            }
	            
	        }
	    }
	    
	    if(found) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
