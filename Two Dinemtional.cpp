#include<iostream>

using namespace std;

int main(){
	int myArray[3][4] = {{32 , 54 , 1 , 34} , {54 , 89 , 12 , 9} , {21 , 17 , 33 , 22}};
	
	for(int i = 0; i < 3; i++) {
		
		for(int j = 0 ; j < 4 ; j++) {
			cout<< myArray[i][j] <<" ";
		}
		cout<<endl;
	}

	return 0;
}
