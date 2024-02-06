#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int len;
        cin>>len;
        string temp;
        cin>>temp;
        int i=temp.length()-1;
        while(i>=0 && temp[i]!='B'){
            i--;
        }
        int startIndex=i;
        int endIndex=i;
        while(i>=0){
            if(temp[i]=='B') endIndex=i;
            i--;
        }
        cout<<startIndex-endIndex+1<<endl;
 
    }
 
return 0;
 
}
