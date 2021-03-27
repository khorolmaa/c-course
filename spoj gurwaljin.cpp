#include <iostream>
using namespace std;

int main() {
	int x,y,z,w,d;
	cin>>x>>y;
	z=x*60;
	w=y%60;
	d=z+w;
	cout<<d;
	return 0;
}
