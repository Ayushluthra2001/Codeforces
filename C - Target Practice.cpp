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
            char input[10][10];
            for(int i=0;i<10;i++){

                for(int j=0;j<10;j++){
                    char d;
                    cin>>d;
                    input[i][j]=d;
                }

            }
            int total=0;

            for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                    if (input[i][j] == 'X')
                total += min(min(i, j) + 1, 10 - max(i, j));
                }

            }

            cout<<total<<endl;




        }
        return 0;
}
