#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	for(int i=1; i<=x; i++){
		for(int j=x; j>0; j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	// your code here

	return 0;
}
