#include<iostream>

using namespace std;

int main(){
	int x; 
	cin>>x;
	for(int i = 1; i<=x; i++){
		for(int j=1; j<=i; j++){
		    cout<<j;	
		}
	cout<<endl; 		
	} 
	
	
    return 0;
}
/* x=5
  j
i 01234
0 1**** 
1 12***
2 123**
3 1234*
4 12345


*/
