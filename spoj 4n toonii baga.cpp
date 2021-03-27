#include <iostream>
using namespace std;

int main() {
	int x,y,z,d;
	cin>>x>>y>>z>>d;
	if(x<y && x<z && x<d){
		cout<<x;
	}else if(y<x && y<z && y<d){
		cout<<y;
	}else if(z<x && z<y && z<d){
		cout<<z;
	}else if(d<x && d<y && d<z){
		cout<<d;
	}
	return 0;
}
