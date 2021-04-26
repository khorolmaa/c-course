#include<iostream>

using namespace std;

int main(){
	int x; 
	cin>>x;
	for(int i=0; i<=x; i++){
		for(int j=1; j>i; j++){
			//if()
		    cout<<j<<" ";	
		}
	cout<<endl; 		
	} 
	
	
    return 0;
}
/* x=5
  j
i 01234
0 12345 i=0 j=0
1 1234* i=1 j=4
2 123** i=2 j=
3 12***
4 1****


*/
