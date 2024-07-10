#include<iostream>

using namespace std;

int main(){
	
	int myArray [] = {1 , 2 , 3 , 4 , 5};
	int i = 0;
//	print the element of the array until an element is greater than 3 is found
    while (i < 5  && myArray[i] <=3 ){
    	
    	cout<< myArray[i] <<" ";
    	
    	i++;
	}	
	
	
	
	cout<<endl;
	
	
	return 0;
}
