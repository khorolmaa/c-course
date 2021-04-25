#include<iostream>
using namespace std;
int main(){
	int x=15;
	//cin>>x;
	for(int i=0; i<x; i++){
		for(int j=x-1; j>i; j--){	
			cout<<" ";
		}
		/*for(int j=0; j<x; j++){
			cout<<"*";
		}*/
		for(int j=0; j<x; j++){
			if(i==0 || j==0 || j==x-1 || i==x-1 || i==j || j==x-i-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
	    cout<<endl;
	}

	
	
	
	
	
	
	return 0;
}
/* x=5
  j
i 01234
0 1234*****   i=0 j=x-i-1 
1 123*   *    i=1 j=x-
2 12*   *     i=2 j=x-3
3 1*   *      i=3 j=x-4
4 *****       i=4 j=x-5















*/
