#include<iostream>

using namespace std;

int main(){
	int x=10; 
	//cin>>x;
	for(int i = 0; i<x; i++){
		for(int j = 0; j<x; j++){
			if( i==x-1 || j==0 ){
			    cout<<"*";	
			}else{
			    cout<<" ";
			}
		}
        cout<<endl;
	}
		
    return 0;
}
/* n=10
i 012345678910j
0 ***********
1 *         * 
2 *         * 
3 *         *
4 *         *
5 *         * 
6 *         *
7 *         *
8 *         * 
9 *         * 
10***********#include<iostream>

using namespace std;

int main(){
	int x=10; 
	//cin>>x;
	for(int i = 0; i<x; i++){
		for(int j = 0; j<x; j++){
			if(i==0 || i==x-1 || j==0 || j==x-1){
			    cout<<"*";	
			}else{
			    cout<<" ";
			}
		}
        cout<<endl;
	}
		
    return 0;
}
/* n=10
i 012345678910j
0 ***********
1 **       ** 
2 * *     * * 
3 *  *   *  *
4 *   * *   *
5 *    *    * 
6 *   * *   *
7 *  *   *  * 
8 * *     * * 
9 **       ** 
10*********** */
