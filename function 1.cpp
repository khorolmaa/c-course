#include<iostream>
using namespace std;
double nem(double,double);
int main(){
	double x, y, sum;
	cin>>x>>y;
	sum = nem(x,y);
	cout<<sum;
	
	
	
	return 0;
}
double nem(double a, double b){
	double d;
	d = a + b;
	return d;
	
}
