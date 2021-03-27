#include <iostream>
using namespace std;

int main() {
	int x,i,j;
	cin>>x;
	for(int i=1; i<=x; i++){
		for(int j=1; j<=x; j++){
			cout<<j<<endl;
		}
		cout<<endl;
	}
	for(int i = 0; i<x; i++){
		for(int j = x-1; j>i; j--){
				cout<<" ";	
			}
		for( int j = 0; j<x; j++){
			cout<<"*";
	    }
	    cout<<endl;
	}
	// your code here

	return 0;
}
/*
i 012345j
0 1---- i=
1 12---
2 123--
3 1234-
4 12345






*/
