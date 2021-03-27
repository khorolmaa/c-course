#include<iostream>

using namespace std;

int main(){
	int x=10; 
	//cin>>x;
	for(int i = 0; i<x; i++){
		for(int j = x-1; j>i; j--){
				cout<<" ";	
			}
		for( int j = 0; j<x; j++){
			cout<<"*";
	    }
	    cout<<endl;
	}
        
    return 0;

}
		
    
/* x=10
i 012345678910j
0           *********** i=0 j=10
1          *********** i=1 j=9
2         ***********  i=2 j=8
3        ***********
4       ***********
5      ***********
6     ***********
7    *********** 
8   *********** 
9  ***********
10*********** 





*/
