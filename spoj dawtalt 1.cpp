#include<iostream>

using namespace std;

int main(){
	int x; 
	cin>>x;
	for(int i=1; i<=x; i++){
		for(int j=1; j<=x; j++){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}

