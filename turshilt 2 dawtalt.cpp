#include<iostream>

using namespace std;

int main(){
	int x=10; 
	//cin>>x;
	for(int i = 0; i<x; i++){
		for(int j = 0; j<x; j++){
			if(i==0 || i==x-1 || j==0 || j==x-1 ||i==j  || i==x-1 || j==x-i-1){
				cout<<"*";	
			}else{
			 cout<<" ";
			}
		}
        cout<<endl;
	}
		
    return 0;
}
/* x=10
i 012345678910j
0 *********** i=0 j=x-i-1
1 **       ** i=1 j=x-i-1
2 * *     * * 
3 *  *   *  *
4 *   * *   *
5 *    *    * 
6 *   * *   *
7 *  *   *  * 
8 * *     * * 
9 **       ** 
10*********** */
