#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x , y , z, a;
    cin>>x>>y>>z>>a;

    int cuboid = x * y * z;
    int cube = a * a * a;
    if(cuboid > cube) cout<<"Cuboid"<<endl;
    else if(cube>cuboid) cout<<"Cube"<<endl;
    else cout<<"Equal"<<endl;

}
