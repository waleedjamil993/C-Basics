#include<iostream>

using namespace std;

int main(){
	int myArray[5] = {1 , 2 , 3 , 4 , 5};
	
//	print index values

cout<<myArray[0]<<"\n";

cout<< "Old value of index 2 ;"<<myArray[2]<<"\n";

for(int i = 0 ; i<5 ; i++){
	
cout<< " "<<myArray[i]<<"\n";
	
}
myArray[2] = 10;

cout<< "Updated value of index 2 ;"<<myArray[2]<<"\n";

// now print the values of array

for(int i = 0 ; i<5 ; i++){
	
cout<< " "<<myArray[i]<<"\n";
	
}



return 0 ;
}
